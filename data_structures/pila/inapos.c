#include<stdio.h>
#include "Elem.h"
#include "pila.h"

int es_dig(Elem e){return ((e>='0')&&(e<='9'));}
int es_may(Elem e){return ((e>='A')&&(e<='Z'));}
int es_min(Elem e){return ((e>='a')&&(e<='z'));}
int es_letra(Elem e){return ((es_min(e))||(es_may(e)));}
int es_operando(Elem e){ return (es_letra(e)||es_dig(e));}
int espari(Elem e){return e=='(';}
int espard(Elem e){return e==')';}
int prec(Elem e){ switch (e) {
                     case '(': return 4; break;
                     case '^': return 3; break;
                     case '*': case'/': return 2; break;
                     case '+': case'-': return 1; break;
                     }
                 }
                 
char* inapos(char *infix, char *cad){
    Pila ops=empty();
    int i=0,j=0;
    char op;
      
    while(op=infix[i++]){
         if(es_operando(op))
              cad[j++]=op;
         else if(isempty(ops) || espari(top(ops)) )
                 ops=push(op,ops);
               else if(espari(op))
                      ops=push(op,ops);
                    else if(espard(op)){
                            while(!espari(top(ops))){
                                    cad[j++]=top(ops);
                                    ops=pop(ops);
                            } 
                            ops=pop(ops);
                          }  
                          else if(prec(op)>prec(top(ops)))
                                   ops=push(op,ops);
                               else{ while((prec(op)<=prec(top(ops)))&&!espari(top(ops))){
                                        cad[j++]=top(ops);
                                        ops=pop(ops);
                                     }
                                     ops=push(op,ops);   
                                   }    

    }  
   while(!isempty(ops)){
          cad[j++]=top(ops);
          ops=pop(ops);
   }
    cad[j]='\0';
    
    return cad;      
}                 
                    

int main(int argc, char *argv[]){
    char *infix=*(argv+1);
    char cad[80];
    
    puts(inapos(infix,cad));
    
  return 0;  
   
}
