#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "circular.h"

//Funcion de prueba
Circular llena(Circular q, char *pal[]){
         int i;
         q=nueva();
          
         for(i=0;i<5;i++)
             q=formar(q,pal[i]);
         
         return q;
}         

void roundrobin(Circular q){
     while(1){
       puts("------------------");
       impcircularc(q=reformar(q));
       getchar();
    }
}

int main(){
    
    int i;
    char *pal[5]={"uno","dos","tres","cuatro","cinco"};
        
    Circular q=nuevac();
    
    roundrobin(q=llena(q,pal));    
    
    return 1;
}
