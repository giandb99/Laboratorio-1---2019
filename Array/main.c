#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

//int const LARGO = 5; //la constante es una variable de solo lectura;

int const x = 10;

int main()
{
    int miArray[TAM]={};
    int indice;

    cargarArray(miArray, TAM);
    mostrarArray(miArray, TAM);
    indice = buscarValor(miArray, TAM, 5);

    if(indice != -1)
    {
        printf("\n\nEl indice es: %d\n", indice);
    }
    else
    {
        printf("\n\nValor inexistente!!!\n");
    }

    return 0;
}
