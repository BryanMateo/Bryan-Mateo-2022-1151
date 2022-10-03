	//Bryan Mateo 2022-1151


//Programa 2.1
#include <stdio.h>

	/* Promedio curso.
	El programa, al recibir como dato el promedio de un alumno en un curso
	➥universitario, escribe aprobado si su promedio es mayor o igual a 6.

	PRO: variable de tipo real. */

	void main(void)
	{
	float PRO; //Declara una variable del tipo punto flotante
	printf(“ingrese el promedio del alumno: “); //Imprime un mensaje en la pantalla
	scanf(“%f”, &PRO); //lee datos de tipo flotante y lo asigna a la variable PRO
	if (PRO >= 6) //toma una decision si el valor de la variable PRO es igual o mayor a 6
		printf(“\nAprobado”); //si la decision es verdadera entonces imprime un mensaje en la pantalla
	}

//Programa 2.2

	#include <stdio.h>
/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado, 
➥incrementa 11% el mismo si éste es inferior a $1,500. 
PRE y NPR: variable de tipo real. */
	void main(void)
	{
	float PRE, NPR; //declara las variables PRE y NPR de tipo punto flotante
	printf(“ingrese el precio del producto: “); //Imprime un mensaje en la pantalla
	scanf(“%f”, &PRE); //;lee datos de tipo punto flotante y los asigna a la variable PRE
	if (PRE < 1500) //revisa si la variable PRE es inferior a 1500
	{
		NPR = PRE * 1.11; // Si es verdadero procede a multiplicar el valor de PRE por 1.11 y le asigna el valor a la variable NPR
	printf(“\nNuevo precio: %7.2f”,NPR); //Imprime el valor de NPR en pantalla
	}
	}

//Programa 2.3

	#include <stdio.h>
/* Promedio curso. 
El programa, al recibir como dato el promedio de un alumno en un curso 
➥universitario, escribe aprobado si su promedio es mayor o igual a 6, o 
➥reprobado en caso contrario.
PRO: variable de tipo real. */
	void main(void)
	{
	float PRO; //Declara una variable llamada PRO del tipo punto flotante
	printf(“Ingrese el promedio del alumno: “); //Imprime un mensaje en pantalla
	scanf(“%f”, &PRO); //lee datos del tipo punto flotante y los almacena en variable PRO
	
	if (PRO >= 6.0) //Revisa si el valor de PRO es mayor o igual a 6.0
		printf(“\nAprobado”); //Si es verdadero imprime un mensaje en pantalla
	else //Si es falso
		printf(“\nReprobado”); //Imprime un mensaje distinto en pantalla
	}


	//Programa 2.4

	#include <stdio.h>
/* incremento de precio. 
El programa, al recibir como dato el precio de un producto, incrementa al
➥mismo 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual). 
PRE y NPR: variables de tipo real. */
	void main(void)
	{
	
	float PRE, NPR; //Declara las variables PRE y NPR de tipo punto flotante
	printf(“Ingrese el precio del producto: “); //Imprime un mensaje en pantalla
	scanf(“%f”, &PRE);	//Lee datos de tipo punto flotante y los asigna a la variable PRE
	if (PRE < 1500) //Verifica si el valor de la variable PRE es menor a 1500
		NPR = PRE * 1.11; //Si es verdadero le asigna a la variable NPR el valor de PRE multiplicado por 1.11
	else //Si es falso entonces
		NPR = PRE * 1.08; //asigna a la variable NPR el valor de PRE multiplicado por 1.08
		printf(“\nNuevo precio del producto: %8.2f”, NPR); //Imprime el valor de NPR en pantalla
	}
