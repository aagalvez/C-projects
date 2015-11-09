/*Dividing manually and recursively without using the divide operator */
#include <stdio.h>

int q,r; //quotient == q , residue == r

int main(){
	int a,b;
	
	printf("Type the dividend a: ");
	scanf("%d",&a);
	printf("\n a = %d",a);
	printf("\n");
	printf("\n");
	
	printf("Type the divisor b: ");
	scanf("%d",&b);
	printf("\n b = %d",b);
	printf("\n");
	printf("\n");
	
	division(a,b);
	
	system("PAUSE");	
	return 0;
}
division(int a, int b){
    if(a==1){
        if(b==1){
				q=1;
				r=0;
				printf("\n a = %d",a);
				printf("\n b = %d",b);
				printf("\n q = %d",q);
				printf("\n r = %d",r);
				printf("\n");
			}
				else{
						q=0;
						r=1;
						printf("\n a = %d",a);
						printf("\n b = %d",b);
						printf("\n q = %d",q);
						printf("\n r = %d",r);
						printf("\n");
					}
        }
    if(a>1){
        division(a-1,b);
        printf("\n a = %d",a);
        printf("\n b = %d",b);
        printf("\n q = %d",q);
        printf("\n r = %d",r);
        printf("\n");
        
        if(r+1<b){
				r++;
				printf("\n a = %d",a);
				printf("\n b = %d",b);
				printf("\n q = %d",q);
				printf("\n r = %d",r);
				printf("\n");
            }
                else{
						q++;
						r=0;
						printf("\n a = %d",a);
						printf("\n b = %d",b);
						printf("\n q = %d",q);
						printf("\n r = %d",r);
						printf("\n");
                    }
        }
}
