#include<stdio.h>
void main ()
{
    int num,primo,n,i;
    printf("Introduzca numero: ");
    scanf("%d",&num);
    num=num+1;
    do
    {
       primo = 1;
       for (i=2;i<=num/2;i++)
          if((num%i)==0)
             primo=0;  
       if (primo)
          printf("el numero primo siguiente es: %d\n", num);    
		  num++;     
    }while (!primo);
}
