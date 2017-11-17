#include <stdio.h>
void main () {
	int saldo=2000, clave, cont=1, op, var=0;
	printf("Introduzca su contraseña:\t");
	scanf("%d", &clave);
	while (clave!=1234)
	{
		if (cont<4)
		{
		printf("\nCONTRASENA INCORRECTA!");
		printf("\nIntroduzca su contraseña nuevamente:\t");
		scanf("%d", &clave);
		cont++;
			
		if (cont==4 && clave!=1234)
		{
			printf("\n\nCUENTA BLOQUEADA.");
		}
		}	
	}
	if (clave==1234)
	{
		printf("\nBIENVENIDO\n\n");
		printf("Presione el numero de su opcion:\n");
		printf("1. Ingreso a la cuenta\n");
		printf("2. Retiro\n");
		printf("3. Ver saldo\n");
		printf("Opcion Salida (presione 0)\n");
		scanf("%d", &op);
		switch (op)
		{
			case 1: 
			    printf("\n****OPCION INGRESO****\n");
			    printf("\nDijite la cantidad que desea ingresar:\t");
			    scanf("%d", &var);
			    saldo=saldo+var;
			    printf("\nNUEVO SALDO:\t %d", saldo);
			    break;
			
			case 2:
				printf("\n****OPCION RETIRO****\n");
				printf("\nDijite la cantidad que desea retirar:\t");
			    scanf("%d", &var);
			    if(var>saldo)
			    {
			    	printf("No cuenta con suficiente saldo.");
				}
				else
				{
					saldo=saldo-var;
					printf("\nNUEVO SALDO:\t %d", saldo);
				}
				break;
				
			case 3:
				printf("\n****VER SALDO****\n");
				printf("El saldo de la cuenta es: \t %d", saldo);
				break;
				
			case 0:
				printf("\n****FIN DEL PROGRAMA****");
				break; 
				
			default:
				printf("\nMENSAJE NO VALIDO.");
		}
	}
}
	

