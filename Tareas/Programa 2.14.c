    //Bryan Mateo 2022-1151
 
#include <stdio.h>
/* Teléfono.
El programa, al recibir como datos la clave de la zona geográfica y el número de segundos de una llamada telefónica, calcula el costo de la misma.
CLA y TIE: variables de tipo entero.
COS: variable de tipo real. */
void main(void)
{

  int CLA, TIE; //declara variables de tipo entero
  float COS; //declara variable tipo float
  
  printf("Ingresa la clave y el tiempo: "); //imprime un mensaje en pantalla
  scanf("%d %d", &CLA, &TIE); //espera valores tipo entero y los guarda en memoria
  
  switch(CLA) //empieza un switch con la variable CLA
  {
  //dependiendo del valor de CLA seleccionara algun caso
  case 1: COS = TIE * 0.13 / 60; 
  break;

  case 2: COS = TIE * 0.11 / 60; 
  break;

  case 5: COS = TIE * 0.22 / 60; 
  break;

  case 6: COS = TIE * 0.19 / 60; 
  break;

  case 7:
  case 9: COS = TIE * 0.17 / 60; 
  break;

  case 10: COS = TIE * 0.20 / 60; 
  break;

  case 15: COS = TIE * 0.39 / 60; 
  break;

  case 20: COS = TIE * 0.28 / 60; 
  break;

  default : COS = -1; 
  break;//cualquier otro valor asignara eso a la variable COS 
  
  }
 
  if (COS != -1) //si COS es diferente de -1
  printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS); //Imprime los valores de las variables CLA TIE Y COS
  
  else //si es falso
  printf("\nError en la clave"); //imprime un mensaje en pantalla


}