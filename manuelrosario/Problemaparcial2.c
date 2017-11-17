#include<stdio.h>
void main()
{
	int fibo=0, m, n, j, suma;
	printf("ingrese numeros\n");
	scanf("%d",&n);
	for(j=0; j<=n; j++)
	{
		suma=m+fibo;
		printf("%d + %d = %d \n", fibo,m,suma);
		m=fibo;
		fibo=suma;
	}
}
