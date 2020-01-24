#include "MTSO.h"
#include <stdio.h>
#include <stdlib.h>


void createmtso(mtso *m){
 m->d=NULL;
 m->v=NULL;
 m->e=NULL;
}

void add_data_call(mtso *m,char c[],char r[],int p_no){
    data_call *dptr =(data_call*)malloc(sizeof(data_call));
    dptr->tag= 'D';
   strcpy(c,dptr->caller);
   strcpy(r,dptr->reciever);
    dptr->packet_no=p_no;
    dptr->next=NULL;
    if(m->d==NULL){
        m->d=dptr;
    }else{
     data_call *current=m->d;
     while(current->next!=NULL){
        current=current->next;
     }
     current->next=dptr;
    }
}

void add_voice_call(mtso *m,char c[],char r[],int show,int roam){
     voice_call *vptr =(voice_call*)malloc(sizeof(voice_call));
    vptr->tag= 'V';
    strcpy(c,vptr->caller);
    strcpy(r,vptr->reciever);
    vptr->show_id=show;
    vptr->roaming_op=roam;
    vptr->next=NULL;
    if(m->v==NULL){
        m->v=vptr;
    }else{
     voice_call *current=m->v;
     while(current->next!=NULL){
        current=current->next;
     }
     current->next=vptr;
    }
}

void add_emrg_call(mtso *m,char c[],char r[]){
    emrg_call *eptr =(emrg_call*)malloc(sizeof(emrg_call));
    eptr->tag= 'E';
    strcpy(c,eptr->caller);
    strcpy(r,eptr->reciever);
    eptr->next=NULL;
    if(m->e==NULL){
        m->e=eptr;
    }else{
     emrg_call *current=m->e;
     while(current->next!=NULL){
        current=current->next;
     }
     current->next=eptr;
    }
}

void serve(mtso *m,char c[],char r[],char *t,int *p_no,int *roam){
    if(m->e!=NULL){
        emrg_call *eptr=m->e;
        strcpy(c,eptr->caller);
        strcpy(r,eptr->reciever);
        *t=eptr->tag;
        m->e=eptr->next;
        free(eptr);
    }else if(m->v!=NULL){
        voice_call *vptr=m->v;
        if(vptr->show_id==0){
            strcpy(c,"not available");
        }else{
           strcpy(c,vptr->caller);
        }
        strcpy(r,vptr->reciever);
        *roam=vptr->roaming_op;
        *t=vptr->tag;
        m->v=vptr->next;
        free(vptr);
    }else if(m->d!=NULL){
        data_call *dptr=m->d;
        strcpy(c,dptr->caller);
        strcpy(r,dptr->reciever);
        *t=dptr->tag;
        *p_no=dptr->packet_no;
        m->d=dptr->next;
        free(dptr);
    }else{
        *t='\0';
    }
}

void dismiss(mtso *m){
    if(m->d!=NULL){
            data_call *temp;
        while(m->d!=NULL){
          temp=m->d;
          m->d=temp->next;
          free(temp);
        }
    }else if(m->v!=NULL){
         voice_call *temp;
        while(m->v!=NULL){
          temp=m->v;
          m->v=temp->next;
          free(temp);
        }
    }

}

void Exit(mtso *m){
   FILE *pf=fopen("MTSO.txt","w");
   if(pf==NULL){
    printf("error opening file\n");
   }
   emrg_call *eptr=m->e;
   while(eptr!=NULL){
     fprintf("%c\n%s\n%s\n\n",eptr->tag,eptr->caller,eptr->reciever);
     m->e=eptr->next;
     free(eptr);
     eptr=m->e;
   }
    voice_call *vptr=m->e;
   while(vptr!=NULL){
     fprintf("%c\n%s\n%s\n%d\n%d\n\n",vptr->tag,vptr->caller,vptr->reciever,vptr->show_id,vptr->roaming_op);
     m->v=vptr->next;
     free(vptr);
     vptr=m->v;
   }
    data_call *dptr=m->d;
   while(dptr!=NULL){
     fprintf("%c\n%s\n%s\n%d\n\n",dptr->tag,dptr->caller,dptr->reciever,dptr->packet_no);
     m->d=dptr->next;
     free(dptr);
     eptr=m->d;
   }
   fclose(pf);
}
