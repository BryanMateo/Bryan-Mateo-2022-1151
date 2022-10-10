#include <stdio.h>
#include <math.h>
/* Función matemática.
El programa obtiene el resultado de una función.
OP y T: variables de tipo entero.
RES: variable de tipo real. */
void main(void)
{
int OP, T;
float RES;
printf(“Ingrese la opción del cálculo y el valor entero: “); //Imprime un mensaje en pantalla	
scanf(“%d %d”, &OP, &T); //Escanea la entrada de en espera de dos numeros enteros separados por un espacio, y los asigna a cada variable respectivamente. 
switch(OP) //comienza un switch case
{
case 1: RES = T / 5; //en caso de que la variable OP sea 1 ejecuta esta operacion
break; //sale del switch
case 2: RES = pow(T,T); //en caso de que la variable OP sea 2 ejecuta esta operacion
/* La función pow está definida en la biblioteca math.h */
break; //sale del switch
case 3: //en caso de que la variable OP sea 3 o 4 ejecuta esta operacion
case 4: RES = 6 * T/2;
break; //sale del switch
default: RES = 1; // en caso de que ninguno de los case coincida, por defecto la respuesta es 1
break;
}
printf(“\nResultado: %7.2f”, RES); //imprime el resultado de la operacion
}

//Bryan Mateo
//2022-1151
