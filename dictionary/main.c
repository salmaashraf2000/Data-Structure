#include <stdio.h>
#include <stdlib.h>
//#include "dict.h"
#include "dict1.h"



int main(){

    printf("Hello world!\n");
    d d1;
    createdict(&d1);
    add(&d1,1,1);
    add(&d1,1,5);
    add(&d1,1,6);
    add(&d1,0,2);
    add(&d1,100,4);
    add(&d1,4,8);
    modify(&d1,1,6,78);
    //removebykey(&d1,1,6);
    traverse(&d1);
    printf("\n\n\n");
    searchbykey(&d1,1);
     printf("\n\n\n");
    traverse(&d1);
    /*removebykey(&d1,1,789);
    traverse(&d1);*/
    return 0;
}
