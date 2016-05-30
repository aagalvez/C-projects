#include<stdio.h>
#include<stdlib.h>
#include "Elem.h"
#include "cola.h"

int main(){
    Cola q=formar(formar(formar(formar(formar(nueva(),1),2),3),4),5);
    impcola(q);
    puts("-----------------");
    impcola(formar(desformar(q),5));

    return 1;
}
