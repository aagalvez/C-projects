#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Elem.h"
#include "lista.h"

int main(int argc, char* argv[]){
    Lista l=vacia();
    FILE *in=fopen(*(argv+1),"r"), *out=fopen(*(argv+2),"w");
    char pal1[40], *pal2; 

    while(fscanf(in,"%s",pal1)>0){
        pal2=(char*)malloc(40);
        strcpy(pal2,pal1); 
        l=cons(pal2,l);
    }
    implista(ordena(l),out);     
    printf("%d palabras en %s.\n",numelem(l),*(argv+2));
    
    fclose(in);
    fclose(out); 
  
    
     return 0;   
}
