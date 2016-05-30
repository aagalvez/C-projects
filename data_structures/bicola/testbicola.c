#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "bicola.h"

int main(){
    
    Bicola a=vaciab();
    
    a=formari(1,formard(a,2));
    
    impelem(izquierdo(a),stdout);
    puts("----------------");
    impelem(derecho(a),stdout);
    
    puts("----------------");    
    impelem(derecho(desformard(formari(0,a))),stdout);
    puts("-------------------------");
    impelem(izquierdo(a),stdout);
    
    return 0;   
}
