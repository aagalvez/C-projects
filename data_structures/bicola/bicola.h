typedef struct Nodo{
           Elem dato;
           struct Nodo *i;
           struct Nodo *d;
         } *ApNodo;
         
typedef struct BNodo{
           ApNodo i;
           ApNodo d;
           } *Bicola;
           
Bicola vaciab(){
     Bicola t=(Bicola)malloc(sizeof(struct BNodo));
     t->i=t->d=NULL;
     return t;
     }
     
int esvaciab(Bicola q){ return ((q->i == NULL)&&(q->d== NULL));}

Bicola formari(Elem ei, Bicola q){
        ApNodo t=(ApNodo)malloc(sizeof(struct Nodo));
        t->dato=ei; t->i=NULL;
        if(esvaciab(q)){ q->i=q->d=t; t->d=NULL; }        
        else{ t->d=q->i;
              q->i->i=t;
              q->i=t;
              }
        return q;      
     }    
     
Bicola formard(Bicola q, Elem ed){
        ApNodo t=(ApNodo)malloc(sizeof(struct Nodo));
        t->dato=ed; t->d=NULL;
        if(esvaciab(q)){ q->d=q->i=t; t->i=NULL; }        
        else{ t->i=q->d;
              q->d->d=t;
              q->d=t;
              }
        return q;      
     }    
     
Elem izquierdo(Bicola q){return q->i->dato;}     

Elem derecho(Bicola q){return q->d->dato;}     

Bicola desformari(Bicola q){
       if(q->i==q->d)
            return vaciab();
       else{
            q->i=q->i->d;
            q->i->i=NULL;
            return q;
       }
}                

Bicola desformard(Bicola q){
       if(q->i==q->d)
            return vaciab();
       else{
            q->d=q->d->i;
            q->d->d=NULL;
            return q;
       }
}                
