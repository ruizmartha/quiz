//Programa que imprima los numeros de los numeros de 2 en 2, de 3 en 3, de 4 en 4... hasta de 25 en 25.
#include<stdio.h>
void main ()
{
	int a=0, cont=2;
	while (cont<=25)
	{
	for (a=2;a<26;a++)
	{
		if(a%cont==0)
		printf("%d\t",a);
	}
	printf("\n");
	cont=cont+1;
    }
 }
