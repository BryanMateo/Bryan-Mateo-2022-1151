    //Bryan Mateo 2022-1151

  #include <stdio.h>
  /* ventas descendentes.
  El programa, al recibir como datos tres valores que representan las ventas
  ➥de los vendedores de una tienda de discos, escribe las ventas en
  ➥orden descendente.
  P, S y R: variables de tipo real. */

  void main(void)
  {
  
  float P, S, R; //declara variables tipo float
 
  printf("\nIngrese las ventas de los tres vendedores: "); //imprime mensaje
  scanf("%f %f %f", &P, &S, &R); //escanea valores float y los asigna a las direcciones de memoria de las variables respectivamente
  
  if (P > S) //operacion logica si es verdadera procede 
    if (P > R) //si es verdadera vuelve a proceder
       if (S > R) //si es verdadera procede nuevamente
            printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R); //imprime un mensaje con los valores ordenados de P S R
       else //si el primer if es falso entonces
           printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S); //imprime el orden P R S
      else //si el segundo if es falso entonces
         printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S); //imprime el orden R P S
    else //si el tercer if es falso entonces 
       if (S > R) //operacion logica si es verdadera procede 
         if (P > R) //operacion logica si es verdadera procede 
               printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R); //imprime los valores de S P R
         else //si el cuarto if es falso entonces
      printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P); //imprime el valor de S R P
    
    else //si el quinto if es falso entonces
  printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P); //imprime el orden de R S P
  }