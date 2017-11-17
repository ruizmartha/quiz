#include<stdio.h>
#define CLV 452        //Clave de usuario
#define SLDI 2000     //El saldo original de la cuenta
void main ()
{
	int op,ctr,r,x=0;
	float ct,cnt,rt,rtr;
	
	do
	{system("cls");         //Si quita esto saldra un bucle infinito de Cuenta bloqueda
	
	while(ctr!=CLV && x<3)
	{//system("cls");		//Esto lo puede poner en comentario, si quiere ver cuantas veces se ingresa la clave mal 
	printf("Ingrese la clave\n");
	scanf("%d",&ctr);
	x++;
    }
	
	if(ctr==CLV)
	{ 
	printf("1-Ingrese en cuenta\n");
	printf("2-Retiro\n");
	printf("3-Ver saldo\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:                                         //Ingreso a la cuenta
			printf("Ingrese la cantidad de dinero\n");
			scanf("%f",&ct);
			
			cnt=ct+SLDI;
			
			printf("El saldo inicial es:%d\n",SLDI);
			printf("El saldo actual es:%.2f\n",cnt);
		break;
		case 2:                                         //Retiro de dinero
			printf("Ingrese la cantidad a retirar\n");
			scanf("%f",&rt);
			
			if(rt>SLDI)
			{
				printf("No cuenta con suficiente saldo\n");
			}else{
				rtr=SLDI-rt;
				
				printf("El saldo a retirar es:%.2f\n",rt);
				printf("El saldo actual es:%.2f\n",rtr); 
			}
		break;
		case 3:                                       //Solo para ver el saldo inicial
			printf("El saldo es:%d\n",SLDI);
		break;
		default:
		printf("Opcion no valida\n");		
	}
	printf("1-Desea continuar\n");  
	printf("0-Desea salir\n");
	scanf("%d",&r);
	
	}else                                            //Si se ingresa mal la cotraseña 3 veces se bloquea la cuenta
	{ 
	   printf("Cuenta bloqueada\n");                //Si parpadea la frase bloquear es por el do  while profesora, si le quita el system("cls) 
	                                               //que esta en Do, saldre un blucle infinito de cuenta bloqueada
	}
	
    }while(r!=0);
}
