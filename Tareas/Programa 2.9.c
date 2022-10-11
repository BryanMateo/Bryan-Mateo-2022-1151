    //Bryan Mateo 2022-1151

#include <stdio.h>
#include <math.h>
/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{

  float RES; //declara variable flotante
  int R, T, Q; //declara variables tipo entero
   
  printf(“Ingrese los valores de R, T y Q: “); //imprime mensaje 
  scanf(“%d %d %d”, &R, &T, &Q); //espera 3 valores de tipo entero 
  RES = pow(R, 4) – pow(T, 3) + 4 * pow(Q, 2); //realiza operaciones matematicas con los valores de las variables
  
  if (RES < 820) // si el valor de res es menor a 820 entonces
  printf(“\nR = %d\tT = %d\t Q = %d”, R, T, Q); //imprime los valores de R T Q

  }