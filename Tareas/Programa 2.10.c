    //Bryan Mateo 2022-1151

#include <stdio.h>
#include <math.h>
/* Par, impar o nulo.
NUM: variable de tipo entero. */

void main(void)
{

  int NUM; //declara variable tipo entero
  printf("Ingrese el número: "); //imprime un mensaje
  scanf("%d", &NUM); //espera un valor de tipo entero
  
  if (NUM == 0) //si el valor es igual a 0 
  printf("\nNulo"); //imprime el un mensaje
  
  else //si el if es falso entonces 
  if (pow (-1, NUM) > 0) //si el resultado de la potencia de la variable NUM de (-1) es mayor a 0 entonces
  printf("\nPar"); //imprime un mensaje
  
  else //si el if es falso 
  printf("\nImpar"); //imprime un mensaje
}