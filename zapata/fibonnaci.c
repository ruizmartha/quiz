#include <stdio.h>

void main (){
	
	int i, n, x=0, y=1, z=0;
	
	printf ("numero de elementos = ");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++){
		z = x + y;
		x=y;
		y=z;
		
		printf ("\n %d ", z);
		
	}
}
