#include<stdio.h>
void main() 
{
	int contp=0 ,c=0,n=5,cuantp=0,i=0 ,a;
	printf("introduzca un numero a evaluar\t");
	scanf("%d",&a);
	n=5;
	while(cuantp<contp){
	
	c=0;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
    }
    if(c==0)
    {
    	printf("el sugiente numero primo es: %d\n",n);
    	
	}
	n++;
}
