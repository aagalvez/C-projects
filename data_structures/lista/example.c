#include<stdio.h>
#include "Elem.h"
#include "lista.h"

int main(){
    
     Lista l1=cons('7',cons('8',cons('9',cons('a',cons('b',cons('c',vacia()))))));
     Lista l2=cons('1',cons('2',cons('3',cons('4',cons('5',cons('6',vacia()))))));
          
     printf("La lista l1 tiene %d elementos.\n",numelem(l1));
     puts("Los elementos de la lista l1 son: \n");
     implista(l1);
     puts("------------------------");
     printf("La lista [l1|l2] tiene %d elementos.\n",numelem(pega(l1,l2)));
     puts("Los elementos de la lista [l1|l2] invertida son:\n");
     implista(invierte(pega(l1,l2)));

     printf("Esta el num 3 en la lista 2?: ");
     estaen('3',l2)?puts("Si."):puts("No."); 
     printf("Esta el num 9 en la lista 2?: "); 
     estaen('9',l2)?puts("Si."):puts("No.");
	 
	 puts("------------------------");
	 printf("Lista ordenada que resulta de pegar l1 y l2 ( [l1|l2] ) es: \n");
	 implista(ordena(pega(l1,l2)));    
     return 0;
}
