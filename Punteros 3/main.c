#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#define T 5

int main()
{
    eEmpleado* unEmpleado;
    unEmpleado = nuevoEmpleadoParametros(1001,"Pedro",10000);

    if(getLegajo(unEmpleado) == 1001)
    {
        mostrarEmpleado(unEmpleado);
    }

    return 0;
}

/*
    int* x;
    int i;
    int aux;

    x = (int*) malloc(sizeof(int)*T);

    if(x!=NULL)
    {
        for(i=0;i<T;i++)
        {
          printf("%d\n", *x);
        }
    }


    x = (int*) calloc(sizeof(int),T);

    if(x!=NULL)
    {
        for(i=0; i<T; i++)
        {
          printf("Ingrese un numero: ");
          scanf("%d", x+i);
        }

        for(i=0; i<T; i++)
        {
          printf("\n%d", *(x+i));
        }

        printf("\n\nAgrego 5 mas: \n");

        aux = (int*)realloc(x,sizeof(int)*(T+5));

        if(aux!=NULL)
        {
            x=aux;
            for(i=T; i<T+5; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", (x+i));
            }

            for(i=0; i<T+5; i++)
            {
                printf("\n%d", *(x+i));
            }

            printf("\n\nQuito 4:\n");
            x=(int*)realloc(x,sizeof(int)*(T+5-4));

            for(i=0; i<T+5-4; i++)
            {
                printf("\n%d", *(x+i));
            }
        }
    }*/
