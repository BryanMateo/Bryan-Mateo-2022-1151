    //Bryan Mateo 2022-1151
 
#include <stdio.h>
#include <math.h>
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de una función.
Y: variable de tipo entero.
X: variable de tipo real. */
 void main(void)
{

  float X; //declara variable de tipo flotante
  int Y; //declara variable tipo entero
  printf(“Ingrese el valor de Y: “); //imprime un mensaje
  scanf(“%d”, &Y); //espera un valor de tipo entero y lo guarda en memoria
  
  if (Y < 0 | | Y > 50) //si el resultado de esta operacion matematica es verdadero
  X = 0; //iguala la variable a 0
  
  else //sino
  
  if (Y <= 10) //si la operacion logica es verdadero
  X = 4 / Y - Y; //asigna el valor de la operacion matematica a la variable
  
  else //sino
  
  if (Y <= 25) //si la operacion logica es verdadero
  X = pow(Y, 3) - 12; //asigna el valor de la operacion matematica a la variable
  
  else //sino
  X = pow(Y, 2) + pow(Y, 3) – 18; //asigna el valor de la operacion matematica a la variable
  printf(“\n\nY = %d\tX = %8.2f”, Y, X); //imprime los valores de X y Y

}