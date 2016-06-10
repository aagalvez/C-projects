#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "AVL.h"

int main(int argc,char *argv[]){
		int i;
		Avl a=vacio();

		do{
				printf("Inserte Nuevo Elemento: ");
				scanf("%d",&i);
			if(i!=0){
				a=insord(i,a);

				puts("-------------------------");
				printf("ARBOL CON NUEVO ELEMENTO\n");
				inorder(a);
				printf("\n");
				puts("-------------------------");

				printf("\n");
				printf("\nLa altura del arbol es: %d\n\n",altura(a));
				printf("El factor de balanceo del main es: %d\n\n",factbal(a));
				printf("El factor de balanceo del izq es: %d\n\n",factbal(izq(a)));
				printf("El factor de balanceo del der es: %d\n\n",factbal(der(a)));
				if(esavl(a))
					printf("ES AVL");
						else
							printf("NO ES AVL, balanceando...");


				printf("\n\n\n");
				puts("-------------------------");
				printf("ARBOL AVL NUEVO\n");
				a=hazavl(a);
				inorder(a);
				printf("\n");
				puts("-------------------------");

				printf("\n");
				printf("\nLa altura de arbol AVL es: %d\n\n",altura(a));
				printf("El factor de balanceo del main es: %d\n\n",factbal(a));
				printf("El factor de balanceo del izq es: %d\n\n",factbal(izq(a)));
				printf("El factor de balanceo del der es: %d\n\n",factbal(der(a)));
				if(esavl(a))
					printf("ES AVL");
						else
							printf("Oh Snap!");
				printf("\n\n\n");
				
			}	

		}while(i);
				printf("\nLa altura de arbol es: %d\n\n",altura(a));
				printf("El factor de balanceo del main es: %d\n\n",factbal(a));
				printf("El factor de balanceo del izq es: %d\n\n",factbal(izq(a)));
				printf("El factor de balanceo del der es: %d\n\n",factbal(der(a)));

	return 0;
}


/*

	do{
				scanf("%d",&i);
			if(i!=0){
				a=borrar(i,a);		
				a=hazavl(a);
				printf("\n");
				inorder(a);
				puts("-------------------------");
			}	

		}while(i);
				printf("\nLa altura de arbol es: %d\n\n",altura(a));
				printf("El factor de balanceo del main es: %d\n\n",factbal(a));
				printf("El factor de balanceo del izq es: %d\n\n",factbal(izq(a)));
				printf("El factor de balanceo del der es: %d\n\n",factbal(der(a)));
				
*/

