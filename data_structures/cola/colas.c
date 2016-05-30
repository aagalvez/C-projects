#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "cola.h"

int main(){
    Cola q=formar(formar(formar(formar(formar(nueva(),1),2),3),4),5);
    impcola(q);
    puts("-----------------");
    impcola(formar(desformar(q),5));

    printf("\n");
    Cola a=nueva();
    int i;
    char c;
   	
    for(i=1;i<=10;i++) 
    	a=formar(a,i+64);
    
    impcola(a); 

    return 1;
}
