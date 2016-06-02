typedef struct Nodo{Elem dato;
   struct Nodo* sig;}* Lista;
   

//~~~~~~~~~~~~~~~~~~~~~VACIA~~~~~~~~~~~~~
Lista vacia(){return NULL; }

//~~~~~~~~~~~~~~~~~~~~~CONS~~~~~~~~~~~~~
Lista cons(Elem e, Lista l){
	Lista temp =(Lista) malloc (sizeof(struct Nodo));
	temp->dato=e;//mete el valor de dato del nodo al que apunta temp
	temp->sig=l;
    return temp;
}
//~~~~~~~~~~~~~~~~~~~~~ESVACIA~~~~~~~~~~~~~
int esvacia(Lista l){return l==NULL;}

//~~~~~~~~~~~~~~~~~~~~~CABEZA~~~~~~~~~~~~~
Elem cabeza(Lista l){return l->dato;}

//~~~~~~~~~~~~~~~~~~~~~RESTO~~~~~~~~~~~~~
Lista resto(Lista l){return l->sig;}


//~~~~~~~~~~~~~~~~~~~~~IMPRIME~~~~~~~~~~~~~
Lista insord(Elem e, Lista l){
      if(esvacia(l))
           return cons(e,l);
      else if(esmenor_igual(e,cabeza(l)))
              return cons(e,l);
           else
              return cons(cabeza(l),insord(e,resto(l)));        
}   

Lista ordena(Lista l){
      if(esvacia(l))
          return l;
      else
          return insord(cabeza(l),ordena(resto(l)));    
}        

//Imprime normal

void implista(Lista l){
     if(!esvacia(l)){
          impelem(cabeza(l));
          implista(resto(l));
          }                    
}

/* ~~~~~SOLO PARA ARCHIVOS~~~~~
void implista(Lista l, FILE *in){
     if(!esvacia(l)){
          impelem(cabeza(l),in);
          implista(resto(l),in);
          }                    
}
*/

int numelem(Lista l){
    if(esvacia(l))
        return 0;
    else
        return 1+numelem(resto(l));       
}

Lista pega(Lista l1, Lista l2){
      if(esvacia(l1))
          return l2;
      else
          return cons(cabeza(l1),pega(resto(l1),l2));
}              

Lista invierte(Lista l){
      if(esvacia(l))
          return l;
      else
          return pega(invierte(resto(l)),cons(cabeza(l),vacia()));    
}

int estaen(Elem e, Lista l){
       if(esvacia(l))
           return 0;
       else if(esigual(e,cabeza(l)))
                return 1;
            else return estaen(e,resto(l));
}

Lista borra(Elem e, Lista l){
         if(esvacia(l))
              return l;
         else
              if(esigual(e,cabeza(l)))
                   return resto(l);
              else 
                   return cons(cabeza(l),borra(e,resto(l)));
}                                       

Lista pegasr(Lista l1, Lista l2){
         if(esvacia(l1))
             return l2;
         else if(estaen(cabeza(l1),l2))
                  return pegasr(resto(l1),l2);
              else return pegasr(resto(l1),cons(cabeza(l1),l2));
}

Lista comunes(Lista l1, Lista l2){
      if(esvacia(l1))
          return vacia();
      else if(estaen(cabeza(l1),l2))
               return pegasr(cons(cabeza(l1),vacia()),comunes(resto(l1),l2));
           else 
               return comunes(resto(l1),l2);
}                 
     
Lista dif(Lista l1, Lista l2){
         if(esvacia(l2))
            return l1;
         else if(!estaen(cabeza(l1),l2))
                 return pegasr(cons(cabeza(l1),vacia()), dif(resto(l1),l2));
}
