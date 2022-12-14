#include <stdio.h>
#include <string.h>
/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, así como la forma de acceso a los campos de las variables o apuntadores de tipo estructura, tanto para lectura como para escritura. Se utiliza además una función que recibe como parámetro un apuntador de tipo estructura. */
typedef struct /* Declaración de la estructura domicilio utilizando un typedef. */
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;
struct empleado /* Declaración de la estructura anidada empleado. */
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /* direccion es un campo de tipo estructura  domicilio de la estructura empleado. */
};
void Lectura(struct empleado *a)
/* Función que permite leer los campos de un apuntador de tipo estructura empleado. */
{
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("—-Ingrese la dirección del empleado—-");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}
void main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jerónimo", 120, 3490, "Toluca"};
    struct empleado e3;
    /* Se declaran diferentes variables y apuntadores de la estructura empleadopara que el lector pueda apreciar también las diferentes formas en que loscampos reciben valores. */
    /* En el programa principal se leen los campos de una variable, e3, y unapuntador de tipo estructura, *e1. */


    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", &e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("—-Ingrese la dirección del empleado—-");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e3.direccion.localidad);
    /* En la función Lectura se leen los campos de una variable, e4, y un apuntadorde tipo estructura, *e2. */
    printf("\nDatos del empleado 1\n");
    printf("\nDatos del empleado \n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e3.nombre, e3.departamento, e3.sueldo,e3.direccion.calle, e3.direccion.numero, e3.direccion.cp, e3.direccion.localidad);
}
