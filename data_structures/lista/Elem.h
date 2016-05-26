typedef char Elem;

//Para los archivos
/*typedef char *Elem;

int esmayor(Elem e1, Elem e2){return strcmp(e1,e2)>0;} 
int esmenor(Elem e1, Elem e2){return strcmp(e1,e2)<0;}
int esigual(Elem e1, Elem e2){return strcmp(e1,e2)==0;}
void impelem(Elem e, FILE *in ){fprintf(in,"%s\n",e);}

*/

int esmayor(Elem e1, Elem e2){return e1>e2; }
int esmenor(Elem e1, Elem e2){return e1<e2; }
int esigual(Elem e1, Elem e2){return e1==e2;}
int esmayor_igual(Elem e1, Elem e2){return ((esmayor(e1,e2))||(esigual(e1,e2)));}
int esmenor_igual(Elem e1, Elem e2){ return ((esmenor(e1,e2))||(esigual(e1,e2)));}

void impelem(Elem e){printf("%c\n",e);} //caracter o digito

