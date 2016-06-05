#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "Dicbin.h"

int main(){
    int i;
    Dicbin a=vacio();
    
    do{
        scanf("%d",&i);
        a=insord(i,a); 
        //impelem(raiz(a));
    /*    if(!esvacio(izq(a)))
        	impelem(raiz(izq(a)));
        if(!esvacio(der(a)))
        	impelem(raiz(der(a)));		
      */  puts("....");
        inorder(a);   
         puts("\n");
        }while(i);

        printf("La altura del arbol es: %d", altura(a));
    
    
    return 0;   
}






















/*
int main(){
    int i;
    Dicbin a=vacio();
    
    do{
        scanf("%d",&i);
        a=insord(i,a);    
        }while(i);
    
    puts("Los elementos del arbol son:");
    inorder(a);
    
    return 0;   
}
*/
