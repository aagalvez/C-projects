#include "Arbin.h"

typedef Arbin Dicbin;

Dicbin insord(Elem e, Dicbin d){
       if(esvacio(d))
            return cons(e,vacio(),vacio());
       else if(esmenor(e,raiz(d)))
               return cons(raiz(d),insord(e,izq(d)),der(d));
            else
               return cons(raiz(d),izq(d),insord(e,der(d)));
}


int esta(Elem e,Dicbin a){
	if(esvacio(a))
		return 0;
		
	else{
		if(esmayor(e,raiz(a)))
			esta(e,der(a));
			
		else if(esmenor(e,raiz(a)))
			esta(e,izq(a));	
			
		else 		
			return 1;
		
		}
	
	
}


Dicbin reemplazar(Dicbin sub,Dicbin nuevo){
	
		if(esvacio(izq(nuevo)))
			 return nuevo=cons(raiz(nuevo),sub,der(nuevo));
		
		else
			reemplazar(sub,izq(nuevo));
}


Dicbin borrar(Elem e,Dicbin a){
		if(esvacio(a))
			return a;
			
		else if(!esta(e,a))
			return a;
			
			
		else{
			//hacemos el recorrido
				if(esmayor(e,raiz(a)))
					return cons(raiz(a),izq(a),borrar(e,der(a)));
					
				else if(esmenor(e,raiz(a)))
					return cons(raiz(a),borrar(e,izq(a)),der(a));
					
				else{
						if(esvacio(izq(a)))
							return der(a);
							
						else if(esvacio(der(a)))
							return izq(a);
							
						else
							return reemplazar(izq(a),der(a));				
				
				}
			
		}
}       
