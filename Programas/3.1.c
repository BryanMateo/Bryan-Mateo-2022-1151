#include <stdio.h>
/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la nómina de la universidad.
I: variable de tipo entero.
SAL y NOM: variables de tipo real. */
void main(void)
{
    int I; //declaro variable tipo entero
    float SAL, NOM; //declaro variables de tipo punto flotante
    NOM = 0; //le asigno un valor a la variable
    for (I=1; I<=15; I++) //inicio un bucle for con sus parametros
    {
        printf("\nIngrese el salario del profesor%d:\t", I); //imprimo un mensaje en pantalla
        scanf("%f", &SAL); //espero un valor numerico de tipo decimal
        NOM = NOM + SAL; //sumo el valor de NOM con el de SAL y se lo asigno nuevamente a NOM y repito 15 veces mas
    }
    printf("\nEl total de la nómina es: %.2f", NOM); //al concluir el for imprimo la suma de los salarios
}
