#include<stdio.h>

void main(){
	int a,b,c=1,num=1,conta=0;
	
	for(a=25; a>=1; a--){
	c=c+1;
		for(b=1; b<26;b++){
			conta=num+conta;
				if(conta%c==0)
				printf("%d	",conta);
		}
		conta=0;
		printf("\n");
	}
}
