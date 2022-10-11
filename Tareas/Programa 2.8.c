    //Bryan Mateo 2022-1151

#include <stdio.h>
/* Asistentes.
El programa, al recibir como datos la matrícula, la carrera, el semestre y el promedio de un alumno de una universidad privada, determina si éste puede ser asistente de su carrera. 
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */
void main(void)
{
  int MAT, CAR, SEM; //declara variables tipo entero
  float PRO; //declara variable tipo float
 
  printf("Ingrese matrícula: "); //imprime un mensaje
  scanf("%d", &MAT); //espera valores de tipo entero y los almacena en la memoria

  printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica) : "); //imprime un mensaje 
  scanf("%d", &CAR); //espera un valor de tipo entero y lo almacena en memoria
  
  printf("Ingrese semestre: "); //imprime un mensaje
  scanf("%d", &SEM); //espera un valor de tipo entero y lo almacena en la memoria
  
  printf("Ingrese promedio: "); // imprime un mensaje
  scanf("%f", &PRO); //espera valores de tipo flotante y los almacena en memoria
  
  switch(CAR) //comienza un switch con la variable CAR
  {
  
  case 1: if (SEM >= 6 && PRO >= 8.5) //si la variable CAR es 1
  printf("\n%d %d %5.2f", MAT, CAR, PRO); 
  break; //sale del switch
  
  case 2: if (SEM >= 5 && PRO >= 9.0) //si la variable CAR es 2
  printf("\n%d %d %5.2f", MAT, CAR, PRO); //imprime los valores de las variables
  break; //sale del switch
  
  case 3: if (SEM >= 6 && PRO >= 8.8) //si la variable CAR es 3
  printf("\n%d %d %5.2f", MAT, CAR, PRO); //imprime los valores de las variables
  break; //sale del switch
 
  case 4: if (SEM >= 7 && PRO >= 9.0) //si la variable CAR es 4
  printf("\n%d %d %5.2f", MAT, CAR, PRO); //imprime los valores de las variables
  break; //sale del switch
  
  default: printf("\n Error en la carrera"); // cualquier otro valor en CAR 
  break; //sale del switch
  }
}