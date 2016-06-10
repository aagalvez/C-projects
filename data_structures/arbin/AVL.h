#include "Dicbin.h"

typedef Dicbin Avl;

int absoluto(int n){
	return n>=0 ? n : (-1)*n;
}

int factbal(Avl a){
	
	if(esvacio(a))
		return 0;
		
	else
	return altura(izq(a))-altura(der(a));
}

int esavl(Avl a){
	
	if(esvacio(a))
		return 1;
		
	else if((absoluto(factbal(a))<=1) && esavl(izq(a)) && esavl(der(a)))
			return 1;
			
		else
			return 0;
}


Avl rotader(Dicbin a){return cons(raiz(izq(a)),izq(izq(a)),cons(raiz(a),der(izq(a)),der(a)));}

Avl rotaizq(Dicbin a){return cons(raiz(der(a)),cons(raiz(a),izq(a),izq(der(a))),der(der(a)));}

Avl rotizqder(Dicbin a){return rotader(cons(raiz(a),rotaizq(izq(a)),der(a)));}

Avl rotderizq(Dicbin a){return rotaizq(cons(raiz(a),izq(a),rotader(der(a))));}


Avl hazavl(Dicbin a){
		if (esavl(a))
			return a;
				
		else if(factbal(a)>0){
				if(esavl(izq(a))){
						if(factbal(izq(a))>0)
							a= rotader(a);
							
						else
							a= rotizqder(a);
				}
				
				else
					a= cons(raiz(a),hazavl(izq(a)),der(a));
		}
			
		else{
				if(esavl(der(a))){
						if(factbal(der(a))<0)
							a= rotaizq(a); 
							
						else
							a= rotderizq(a);
				}
				
				else
					a= cons(raiz(a),izq(a),hazavl(der(a)));		
			
		}	
	
	return a;		
		
}			
	
