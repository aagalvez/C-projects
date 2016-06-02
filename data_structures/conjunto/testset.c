#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "lista.h"
#include "conjunto.h"

int main(){
    
    Elem e1[10]={65,66,67,68,69,70};
    Elem e2[10]={69,70,71,72,73,74,75,76};
    Conjunto c1=crea(e1,6);
    Conjunto c2=crea(e2,8);    
    
    imprime(union1(c1,c2));
    puts("");
    printf("%d",cardinalidad(union1(c1,c2)));
    puts("");
    imprime(interseccion(c1,c2));  
    puts(""); 
    printf("%d\n",cardinalidad(interseccion(c1,c2)));
    imprime(diferencia(c1,c2)); 
    
   
     return 0;   
}

