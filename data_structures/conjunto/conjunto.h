typedef Lista Conjunto;

int contiene(Conjunto, Elem);
int esnuevo(Conjunto);
Conjunto nvoconjunto();
Conjunto inserta(Elem, Conjunto);


Conjunto crea(Elem ent[], int n){
         Conjunto nvo=nvoconjunto();
         int i;
         
         for(i=0;i<n;i++)
              nvo=inserta(ent[i],nvo);
         return nvo;     
}               
             

Conjunto nvoconjunto(){return vacia();}

Conjunto inserta(Elem e, Conjunto c){ 
         if(esnuevo(c))
            return cons(e,c);
         else if(!contiene(c,e))
                  return cons(e,c);
              else
                  return c; 
}

int esnuevo(Conjunto c){ return esvacia(c);}

int contiene(Conjunto c, Elem e){ return estaen(e,c);}

Conjunto elimina(Elem e, Conjunto c){ return borra(e,c);}

Conjunto union1(Conjunto c1, Conjunto c2){return pegasr(c1,c2);}

Conjunto interseccion(Conjunto c1, Conjunto c2){ return comunes(c1,c2);}

Conjunto diferencia(Conjunto c1, Conjunto c2){return dif(c1,c2);}             

int cardinalidad(Conjunto c){return numelem(c);}

void imprime(Conjunto c){implista(c,stdout);}
