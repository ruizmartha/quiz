#include<stdio.h>
void main()
{
	int num=0, c=2, j=0;
	while(c<26)
	{
	for(j=1; j<26; j++)
	   {
		if(j%c==0)
		{
			printf("%d\t",j);
		}
	}
	  printf("\n");
	  c++;
   }
}
