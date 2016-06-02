#include "cola.h"

typedef Cola Circular;

Circular nuevac(){ return nueva();}

int esnuevac(Circular q){return esnueva(q);}

Circular formarc(Circular q, Elem e){ return formar(q,e);}

Elem primeroc(Circular q){ return primero(q); }

Circular desformarc(Circular q){ return desformar(q);}

Cola reformarc(Cola q){ return formar(desformarc(q),primeroc(q)); }

void impcircularc(Circular q){impcola(q);}

