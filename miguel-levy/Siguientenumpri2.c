#include<stdio.h>
void main ()
{
	int n,x,i,num,primo;
	
	printf("Introduzca un numero \n");
	scanf("%d",&num);
	
	while(i<12000 && !primo){
	   i=num+1;
       primo=1;
	for (x=2;i<=i%i && primo; x++)
        { 
         if(i%x==i) 
		 primo=i;
		}
		
		{
			printf("El siguiente numero primo es: %d \n",i);
		}
		 i++;
      }
      
}
