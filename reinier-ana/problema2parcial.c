#include<stdio.h>
void main()
{
	int  a=1, b, c=0, i, op;
	printf("Ingrese un numero: \n");
	scanf("%d",&b);
	printf("\n");
    for(i=0;i<=b;i++)
    {
        op=a+c;
		printf("%d \n",op);
		c=a;
		a=op;
	}
}
