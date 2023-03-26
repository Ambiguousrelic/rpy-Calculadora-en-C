/*
Yessica Fariña ci 5013777
Ralf Adam ci 5023482
Pamela Franco ci 5346389
*/
#include <stdio.h>
#include <math.h>

void opEntero();
void opReal();
void opFraccion();


int ingresar();


void opPotencia();
void opSen();
void opCos();
void opTan();
void opLog();
void opCeil();
void opFloor();
void opRaizcuadrada();

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
	int opcionreal=0;
	printf("\nOperaciones con numeros reales\n 1.Raiz Cuadrada  2. Potencia  3. Seno  4.Cos  5.Tan  6.Log  7.Ceil  8.Floor");
  do
  {	
  		printf("\nCon que operacion desea trabajar:");
  		scanf("%d",&opcionreal);
  		getchar();
  		switch (opcionreal) 
		{
			case 0:printf("\nFin del programa\n");
        		break;
    		case 1:opRaizcuadrada();
        		break;
    		case 2:opPotencia();
    			break;
    		case 3:opSen();
    			break;
    		case 4:opCos();
    			break;
    		case 5:opTan();
    			break;
    		case 6:opLog();
    			break;
    		case 7:opCeil();
    			break;
    		case 8:opFloor();
    			break;
    		default:printf("\nLas operaciones son entre 1, 2 , 3 , 4 , 5 , 6 , 7 y 8\n");
		}
	}while (opcionreal!=0);	
}

void opRaizcuadrada(){
	int numero;
	float r;
	do
	{	
  		printf("\nIngrese un numero:");
  		scanf("%d",&numero);
  		getchar();
	}while (numero<0);	
	r=sqrt(numero);
	printf("El raiz cuadrada de %d es: %.2f ", numero,r);
}

void opPotencia(){
	int numero;
	int Potencia;
	int r;	
  		printf("\nIngrese un numero:");
  		scanf("%d",&numero);
  		getchar();
  		printf("\nIngrese la potencia:");
  		scanf("%d",&Potencia);
  		getchar();	
	r=pow(numero, Potencia);
	printf("La Potencia de %d elevado a %d es: %d  ", numero,Potencia,r);
}
void opSen(){
	float numero;
	float r;
	do
	{	
  		printf("\nIngrese un numero:");
  		scanf("%f",&numero);
  		getchar();
	}while (!(numero>=0 || numero<=360));	
	r=sin((numero*3.14)/180);
	printf("El Seno de %.0f es: %.2f ", numero,r);
}
void opCos(){
	float numero;
	float r;
	do
	{	
  		printf("\nIngrese un numero:");
  		scanf("%f",&numero);
  		getchar();
	}while (!(numero>=0 || numero<=360));	
	r=cos((numero*3.14)/180);
	printf("El Coseno de %.0f es: %.2f ", numero,r);
}
void opTan(){
	float numero;
	float r;
	do
	{	
  		printf("\nIngrese un numero:");
  		scanf("%f",&numero);
  		getchar();
	}while (!(numero>=0 || numero<=360));	
	r=tan((numero*3.14)/180);
	printf("El Tangente de %.0f es: %.2f ", numero,r);
}
void opLog(){
	float numero;
	float r;	
  		printf("\nIngrese un numero:");
  		scanf("%f",&numero);
  		getchar();	
	r=log10(numero);
	printf("El Logaritmo de %.0f es: %.2f ", numero,r);
}

void opCeil(){
	float numero;
	float r;	
  		printf("\nIngrese un numero:");
  		scanf("%f",&numero);
  		getchar();	
	r=ceil(numero);
	printf("El ceiling de %.2f es: %.2f ", numero,r);
}

void opFloor(){
	float numero;
	float r;	
  		printf("\nIngrese un numero:");
  		scanf("%f",&numero);
  		getchar();	
	r=floor(numero);
	printf("El floor de %.2f es: %.2f ", numero,r);
}


void opFraccion(){
	printf("operacion fraccion");
}
