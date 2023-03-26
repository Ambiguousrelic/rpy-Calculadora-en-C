/*
Yessica Fariña ci 5013777
Ralf Adam ci 5023482
Pamela Franco ci 5346389
*/
#include <stdio.h>
#include <math.h>

int ingresar();

int main(){
	
	ingresar();
	
return 0;
}

int ingresar()
{ 
 int opcion=0;
 printf("Calculadora\nOpciones\n 1. Enteros  2. Reales  3. Fracciones");
  do
  {	
  		printf("\nCon que tipo de numero desea trabajar:");
  		scanf("%d",&opcion);
  		getchar();
  		switch (opcion) 
		{
			case 0:printf("\nFin del programa\n");
        		break;
    		case 1:opEntero();
        		break;
    		case 2:opReal();
    			break;
    		case 3:opFraccion();
    			break;
    		default:printf("\nOperacion inexistente\nLas operaciones son entre 1, 2 y 3\n");
		}
	}while (opcion!=0);	
return opcion;
}

void opEntero(){
	 int nroEntero1=0;
	 char operador;
	 int nroEntero2=0;
	 int resultado;
	 int resto;
  do
  {	
  		printf("\nIngrese una operacion:");
  		scanf("%d %c %d",&nroEntero1,&operador,&nroEntero2);
  		getchar();
	}while (!(operador=='*' || operador=='+' || operador=='-'  || operador=='/'));	
	switch (operador){
		case '+':resultado = nroEntero1 + nroEntero2;
							printf("\nresultado = %d",resultado);
			break;
		case '-':resultado = nroEntero1 - nroEntero2;
				printf("\nresultado = %d",resultado);
			break;
		case '/':resultado = nroEntero1 / nroEntero2;resto = nroEntero1%nroEntero2;
							printf("\nresultado = %d \nresto = %d",resultado,resto);
			break;
		case '*':resultado = nroEntero1 * nroEntero2;
				printf("\nresultado = %d",resultado);
			break;
	}
}

void opReal(){
	printf("operacion real");
}

void opFraccion(){
	printf("operacion fraccion");
}
