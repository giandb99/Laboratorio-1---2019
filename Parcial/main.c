#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_PELICULAS 1
#include "peliculas.h"

int main()
{
    ePelicula listado[CANTIDAD_PELICULAS];
    int opcion=3;
    int bandera=0;
    int aux;

    printf("\n~~~~~~~~~~~~~~~~~BIENVENIDO~~~~~~~~~~~~~~~~~\n\n");
    printf("1. Alta de pelicula\n2. Mostrar listado\n3. Salir\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    do
    {

        opcion=ingresarOpcion();

        switch(opcion)
        {
                case 1:
                    aux=buscarLibre(listado,CANTIDAD_PELICULAS,999);
                    if(aux==999)
                    {
                        system("cls");
                        printf("No se hay mas lugar disponible.\n");
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        cargarPelicula(listado,CANTIDAD_PELICULAS);
                        bandera=1;
                    }

                    break;

                case 2:
                    if(bandera==0)
                    {
                        printf("\nError. Primero debe dar de alta una pelicula\n");
                    }
                    else
                    {
                        mostrarPelicula(listado,CANTIDAD_PELICULAS);
                    }
                    break;

                case 3:
                    printf("\n Saliendo...");
                    system("cls");
                     break;

                default:
                    printf("\nPor favor ingrese una opcion valida\n");
        }

    }while(opcion!=3);

    return 0;
}
