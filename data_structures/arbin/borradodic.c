#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "Dicbin.h"

int main(){
		int i;
		Dicbin a=vacio();

		do{
				scanf("%d",&i);
				printf("\n");
					if(i!=0)
					  a=insord(i,a);		
				puts("-------------------------");	

		}while(i);
		
			inorder(a);
				puts("-------------------------");
		do{
				scanf("%d",&i);
				printf("\n");
					if(i!=0)
					  a=borrar(i,a);
					  	inorder(a);
				puts("-------------------------");
		
		}while(i);
		
		
	return  0;
	
}

