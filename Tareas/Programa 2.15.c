    //Bryan Mateo 2022-1151
 
#include <stdio.h>
/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el número de días de internación de un cliente en un spa, calcula el costo total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */
void main(void)
{
  
  int TRA, EDA, DIA; //declara variables de tipo entero
  float COS; //declara variable de tipo flotante
  
  printf("Ingrese tipo de tratamiento, edad y días: "); //imprime un mensaje
  scanf("%d %d %d", &TRA, &EDA, &DIA); //espera tres valores tipo entero y los almacena en memoria
 
  switch(TRA) //comienza una funcion switch con la variable TRA
  {
 //evalua el caso de la variable TRA y asigna un valor a COS dependiendo del caso
  case 1: COS = DIA * 2800; 
  break;
  
  case 2: COS = DIA * 1950; 
  break;
  
  case 3: COS = DIA * 2500; 
  break;
  
  case 4: COS = DIA * 1150; 
  break;
  
  default: COS = -1; //cualquier otro valor iguala COS a -1
  break;
  
  }
  
  if (COS != -1) //si es verdadero entonces
  {
  
  if (EDA >= 60) //si es verdadero
  COS = COS * 0.75; //iguala COS al resultado de la operacion matematica
  
  else //si es falso
  
  if (EDA <= 25) //si es verdadero entonces 
  COS = COS * 0.85;//iguala COS al resultado de la operacion
  printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %8.2f",  TRA, DIA, COS); //Imprime un mensaje con los valores de TRA DIA Y COS
  
  }
  
  else //si es falso el primer if entonces 
  printf("\nLa clave del tratamiento es incorrecta"); //imprime un mensaje
}