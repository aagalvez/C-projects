typedef char *Elem;

int esmayor(Elem e1, Elem e2){return strcmp(e1,e2)>0;} 
int esmenor(Elem e1, Elem e2){return strcmp(e1,e2)<0;}
int esigual(Elem e1, Elem e2){return strcmp(e1,e2)==0;}
int esmayor_igual(Elem e1, Elem e2){return ((esmayor(e1,e2))||(esigual(e1,e2)));}
int esmenor_igual(Elem e1, Elem e2){ return ((esmenor(e1,e2))||(esigual(e1,e2)));}

void impelem(Elem e, FILE *in ){fprintf(in,"%s\n",e);}

