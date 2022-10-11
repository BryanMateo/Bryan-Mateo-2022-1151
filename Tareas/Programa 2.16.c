    //Bryan Mateo 2022-1151
 
# include <stdio.h>
/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de un empleado, determina si el mismo reúne las condiciones establecidas por la empresa para ocupar un nuevo cargo en una sucursal. 
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */
void main(void)
{

  int CLA, CAT, ANT, RES; //declara variables tipo entero
  
  printf("\nIngrese la clave, categoría y antigüedad del trabajador:"); //imprime un mensaje
  scanf("%d %d %d", &CLA, &CAT, &ANT); //espera valores de tipo entero y los guarda en memoria
  
  switch(CAT) //comienza un switch con la variable CAT
  {
  //evalua el caso de la variable switch
  case 3:
  case 4: if (ANT >= 5)//si es verdadero entonces 
  RES = 1;//iguala la variable RES a 1
    else//sino
    RES = 0;//iguala la variable a 0
    break;//sale del case
  
  case 2: if (ANT >= 7)//si es verdadero entonces
  RES = 1;//iguala la variable RES a 1
  else//sino
  RES = 0;//iguala la variable RES a 0
  break;//sale del case
  
  default: RES = 0;//si no coincide ningun case iguala RES a 0
  break;//sale del case
  }

  if (RES) //si RES es verdadero
  printf("\nEl trabajador con clave %d reúne las condiciones para el puesto", CLA); //imprime un mensaje
  else //si no entonces 
  printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto", CLA); //imprime un mensaje

}