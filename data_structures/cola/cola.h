#include "lista.h"

typedef Lista Cola;

Cola nueva(){ return vacia();}

int esnueva(Cola q){return esvacia(q);}

Cola formar(Cola q, Elem e){
     if(esnueva(q))
        return cons(e,q);
     else
        return cons(cabeza(q),formar(resto(q),e));
}

Elem primero(Cola q){ return cabeza(q); }

Cola desformar(Cola q){ return resto(q);}

void impcola(Cola q){implista(q,stdout);}

Cola reformar(Cola q){
    return formar(desformar(q), primero(q));
}
