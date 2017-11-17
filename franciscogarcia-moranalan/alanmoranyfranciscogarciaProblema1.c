#include<stdio.h>

void main()
{
	int opcion,contra ,salir;
	float ingresar,retiro,saldo=2000;
	do 
	{
		printf("ingrese su contrasena\t");
		scanf("%d",& contra);
		
}
	while (contra!=1508);
	{
	
	printf("\n 1 ingresa en cuenta");
	printf("\n 2 retirar en cuenta ");
	printf("\n 3 ver saldo ");
	printf(" \n salir");
	printf("\n opcion");
	scanf("%d",& opcion);
	switch(opcion)
	{

		
	case 1:
		printf("cuanto dinero desea ingresar: ");
		scanf("%f",& ingresar);
		saldo=saldo + ingresar;
		printf("el saldo total es:%.2f",saldo);
	break;
	case 2:
	 
		printf("\nintroduzca la cantida a retirar ");
	    scanf("%f",&retiro);
        if(retiro<saldo){
	    saldo=saldo-retiro;
		printf("su saldo es de:%.1f",saldo);
		}
		else{
		
		printf("su saldo no es suficiente para el retiro");
	}
	break;
	 case 3:
	 		printf("el saldo disponible es:%.2f", saldo);
	 break;
	 case 4:
	 break;
	 default:
	 printf("usted ha escojido la opcion salida ");	
	 	
	}
	
	
}
	
}
