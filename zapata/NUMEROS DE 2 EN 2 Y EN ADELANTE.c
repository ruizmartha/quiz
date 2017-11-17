#include <stdio.h>

void main (){
	
	int  num=2, j;
		
	do{
					
		for (j=1; j<=25; j++){
			
		if (j%num==0){
					
				printf ("%d\t", j);		
		
			}
			
		}
		printf ("\n");
		num++;
		
	}while (num<=25);
	
}
