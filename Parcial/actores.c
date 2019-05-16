#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "actores.h"
#include "peliculas.h"

void inicializarActores(eActor lista[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].id=0;
        lista[i].estado=-1;
    }
}

void harcodearActores(eActor lista[],int tam)
{
    int i;
    int id={1,2,3,4,5};
    char nombre[50]={"Julieta Roberto","Richar Darin", "Nicole Kidman", "Tita Merello","Natalia Oreiro"};
    char paisOrigen[50]={"EEUU","Argentina","Australiana","Argentina", "Uruguay"};

    for(i=0; i<tam; i++)
    {
        lista[i].id = i + 1;
        strcpy(lista[i].nombre,nombre[i]);
        strcpy(lista[i].paisOrigen,paisOrigen[i]);
        lista[i].estado=1;
    }
}

void mostrarActores(eActor lista[],int tam)
{
    int i;

    printf("\n\t%4s \t%12s \t%12s\n","ID","Nombre","Pais");

    for(i=0;i<tam;i++)
    {
        if(lista[i].estado==0)
        {
            printf("\n\t%4d \t%12s \t%12s\n",lista[i].id,lista[i].nombre,lista[i].paisOrigen);
        }
    }
}

void ordenarActoresPorPais(ePelicula listado[], int tamPeli, eActor lista[],int tamActor)
{
    int i;
    int j;
    int tamActor;
    int tamPeli;

    ePelicula listado(P);
    eActor auxOrigen;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcmp(lista[i].paisOrigen>lista[j].paisOrigen)>0)
            {
                auxOrigen=lista[i];
                lista[i]=lista[j];
                lista[j]=auxOrigen;
            }
        }
    }
}
