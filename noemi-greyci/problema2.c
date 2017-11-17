#include <stdio.h>
#define FINAL 40000
void main () {
	int i, j, primo, num;
	printf("Introduzca el numero a evaluar:\t");
	scanf("%d", &num);
	i=num+1;
	do {
		primo=1;
		for(j=2; j<=i/2 && primo; j++)
		{
			if ((i%j)==0)
			{
			    primo=0;
			}
		}
		if(primo)
		{
			printf("\nEl siguiente numero primo es:\t%d",i);
		}
		i++;
	}while (i<FINAL && !primo);
}
	
