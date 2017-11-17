#include<stdio.h>
void main(){
	int opc, contra, cont=0 ;
	float saldo=2000,saldo_actual=0,saldo_ingresado,saldo_retirado ;
	
	printf("Buenos Dias, introduzca su clave\n");
//la clave correcta es 1725

		do{
		printf("Ingrese la clave: \t");
		scanf("%d",&contra);
		printf("\n");
			cont=cont+1;
		if (contra!=1725)
		{
			printf("clave incorrecta \n");
    	printf("\n");
    	}
    
   while(cont>=3 && contra!=1725){
	printf("**CUENTA BLOQUEADA**");
	return 0;

}
	}while(contra!=1725);
	printf("Clave correcta");

	printf("\n\n");
	printf("1.Ingreso de cuenta\n2.Retiro\n3.Ver saldo Actual\n0.Salir\n");
	printf("Introduzca una opcion\n");
	scanf("%d",&opc);

		
	if(opc==1){
		printf("Ingrese su Saldo\n");
		scanf("%f",&saldo_ingresado);
		saldo_actual=saldo_ingresado+saldo;
		printf("%.2f + %.2f = %.2f\n",saldo,saldo_ingresado,saldo_actual);
		printf("Saldo actual: %.2f",saldo_actual);
	}
	if(opc==2){
		
		printf("Por favor, Introduzca el valor a retirar\n");
		scanf("%f",&saldo_retirado);
		
		if(saldo_retirado>saldo){
			printf("Por favor, Vuelva a Introducir el valor a retirar\n");	
		}
		else{	
		saldo_actual=saldo-saldo_retirado;
		printf("%.2f - %.2f = %.2f\n",saldo_retirado,saldo,saldo_actual);
		printf("Saldo actual: %.2f\n",saldo_actual);	
	}
	}
	else{ if(opc==3){
		printf("Su Saldo actual es: %.2f",saldo);
	}
	}
	if(opc==0){
		printf("Gracias, por utizar el programa\n");
	}
	if(opc>3||opc<0){
		printf("\nOPCION NO VALIDA");
}
}
