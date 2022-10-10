#include <stdio.h>
/* Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su
➥salario en función de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variables de tipo real. */
void main(void)
{
float SAL;
int NIV;
printf("Ingrese el nivel académico del profesor: "); //imprime un mensaje
scanf("%d", &NIV); //escanea la entrada esperando un numero entero y lo asigna a la variable NIV
printf("Ingrese el salario: "); // imprime un mensaje
scanf("%f", &SAL); // escanea la entrada en espera de un valor punto flotante y lo asigna a SAL
switch(NIV) //comienza un switch case con la variable NIV como argumento
{
case 1: SAL = SAL * 1.0035; break; //caso 1 ejecuta una una operacion y la iguala a la variable SAL
case 2: SAL = SAL * 1.0041; break; //caso 2 ejecuta una una operacion y la iguala a la variable SAL
case 3: SAL = SAL * 1.0048; break; //caso 3 ejecuta una una operacion y la iguala a la variable SAL
case 4: SAL = SAL * 1.0053; break; //caso 4 ejecuta una una operacion y la iguala a la variable SAL
}
printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL); //Imprime un mensaje con el resultado de la operacion
} 

//Bryan Mateo
//2022-1151
