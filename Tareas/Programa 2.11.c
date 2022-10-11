    //Bryan Mateo 2022-1151

#include <stdio.h>
/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */
void main(void)
{

  int DIS, TIE; //declara variables enteras
  float BIL; //declara variable float

  printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); //imprime un mensaje
  scanf("%d %d", &DIS, &TIE); //espera datos de tipo entero y los almacena en memoria

  if ((DIS*2 > 500) && (TIE > 10)) //si el resultado de esa operacion es verdadero
  BIL = DIS * 2 * 0.19 * 0.8; //iguala la variable al resultado de una operacion matematica
  printf("\n\nCosto del billete: %7.2f", BIL); //imprime el valor de BIL
  
  else //si el if es falso
  BIL = DIS * 2 * 0.19; //iguala la variable a un calculo
  printf("\n\nCosto del billete: %7.2f", BIL); //imprime el valor de BIL
}