
typedef struct datacall{
  char tag;
  char caller[20];
  char reciever[20];
  int packet_no;
  struct datacall *next;
}data_call;


typedef struct voicecall{
  char tag;
  char caller[20];
  char reciever[20];
  int show_id;
  int roaming_op;
  struct voicecall *next;
}voice_call;


typedef struct emergency{
  char tag;
  char caller[20];
  char reciever[20];
  struct emergency *next;
}emrg_call;

typedef struct{
 data_call *d;
 voice_call *v;
 emrg_call *e;
}mtso;

void createmtso(mtso *m);

void add_data_call(mtso *m,char c[],char r[],int p_no);

void add_voice_call(mtso *m,char c[],char r[],int show,int roam);

void add_emrg_call(mtso *m,char c[],char r[]);

void serve(mtso *m,char c[],char r[],char *t,int *p_no,int *roam);

void dismiss(mtso *m);

void Exit(mtso *m);
