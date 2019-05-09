#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_PELICULAS 2
#include "peliculas.h"
#define LLENO 1
#define VACIO 0

int ingresarOpcion(void)
{
    int opcion;

    printf("\nIngrese una opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);

    while(opcion <1 || opcion>3)
    {
        printf("Error. Ingrese una opcion valida (1-3): ");
        fflush(stdin);
        scanf("%d",&opcion);
    }

    return opcion;
}

ePelicula cargarUnaPelicula()
{
    ePelicula miPelicula;
    char respuesta='s';

    printf("\nIngrese el codigo de la pelicula: ");
    scanf("%d",&miPelicula.codigoPelicula);

    printf("\nIngrese titulo: ");
    fflush(stdin);
    gets(miPelicula.titulo);

    printf("\nIngrese la fecha de estreno de la pelicula: ");
    scanf("%d",&miPelicula.fechaEstreno);

    printf("\nIngrese el genero de la pelicula: ");
    fflush(stdin);
    gets(miPelicula.genero);

    printf("\nIngrese el actor principal: ");
    fflush(stdin);
    gets(miPelicula.actorPrincipal);

    listado[i].estaVacio=0;

    /*printf("\nDesea ingresar otra pelicula? [s/n]: ");
    scanf("%c",&respuesta);

    while(respuesta=='s')
    {
        cargarUnaPelicula();
    }*/

    return miPelicula;
}

void cargarPelicula(ePelicula listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
       listado[i]=cargarUnaPelicula();
    }
}

void mostrarPelicula(ePelicula listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%12s \t%15s \t%15s \t%15s \t%15s \t%15s","ID","Codigo","Titulo","Fecha Estreno","Genero","Actor Princ");
        printf("%10d \t%15d \t%15s \t%10d \t%15s \t%15s",listado[i].id,listado[i].codigoPelicula,listado[i].titulo,listado[i].fechaEstreno,listado[i].genero,listado[i].actorPrincipal);
    }
}

int buscarLibre(ePelicula listado[],int tam,int valor)
{
    int i;
    for(i=1000;i<=tam;i++)
    {
        if(listado[i].estaVacio==valor)
        {
            return i;
        }
    }
    return -1;
}
