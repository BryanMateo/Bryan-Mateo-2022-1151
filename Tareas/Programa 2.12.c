    //Bryan Mateo 2022-1151
 
#include <stdio.h>
#include <math.h>
/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresión determinada.
T, P y N: variables de tipo entero. */

void main(void)
{
  
 int T, P, N; //declara variables de tipo entero
 
  printf("Ingrese los valores de T, P y N: "); //imprime un mensaje
  scanf("%d %d %d", &T, &P, &N); //espera tres valores de tipo entero y los almacena en memoria
  
  if (P != 0) //si p es diferente de 0 
   {
    if (pow (T / P, N) == (pow(T, N) / pow(P, N))) //si la operacion matematica es verdadera
     printf("\nSe comprueba la igualdad"); //imprime un mensaje
  
  else //si no 
  printf("\nNo se comprueba la igualdad"); //imprime un mensaje
   } 
    
  
else //si el primer if es falso
  printf("\nP tiene que ser diferente de cero"); //imprime un mensaje
}