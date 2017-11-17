#include<stdio.h>

void main(){
	int a,b,c=1,suma=0,d=0;
	
	printf("Introduzca un numero: ");
	scanf("%d",&a);
	
	for(b=0; b<a; b++){
		suma=d+c;
		printf("%d + %d = %d\n",d,c,suma);
		d=c;
		c=suma;
	}
}
