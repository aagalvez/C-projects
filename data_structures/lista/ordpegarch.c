#include<stdio.h>
#include<string.h>
#include "Elem.h"
#include "lista.h"

int main(int argc, char* argv[]){
    
    Lista l1=vacia(), l2=vacia();
    FILE *in1=fopen(*(argv+1),"r"), *in2=fopen(*(argv+2),"r"), *out=fopen(*(argv+3),"w");
    char pal1[40], *pal2; 
    
    while(fscanf(in1,"%s",pal1)>0){
        pal2=(char*)malloc(40);
        strcpy(pal2,pal1); 
        l1=cons(pal2,l1);
    }

    while(fscanf(in2,"%s",pal1)>0){
        pal2=(char*)malloc(40);
        strcpy(pal2,pal1); 
        l2=cons(pal2,l2);
    }


    implista(ordena(pega(l1,l2)),out);     
    printf("%d palabras en %s.\n",numelem(pega(l1,l2)),*(argv+2));
    
    fclose(in1);
    fclose(in2);
    fclose(out); 
  
    
     return 0;   
}
