#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[50];
    char otroNombre[50]="Jose Perez";
    int largo;
    int compara;

    strlwr(otroNombre);
    strcat(nombre, otroNombre);

    //strcpy(nombre, otroNombre);
    //strncpy(nombre, otroNombre, 5);

    printf("Su nombre es: %s", nombre);

    //fgets(nombre,50,stdin);
    //scanf("%[^\n]",nombre);

    gets(nombre);
    largo=strlen(nombre);

    printf("%d", largo);

    return 0;
}


/*
ingresar nombre:
ingresar apellido:
mostrar apellido y nombre
*/
