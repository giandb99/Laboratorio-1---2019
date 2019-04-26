#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"


int main()
{
    //definirArray
    //cargarArray
    //mostrarArray

    int opcion;

    eProducto unProducto;
    eProducto listadoProductos[T];

    construirArray(listadoProductos,T);

    inicializarProductos(listadoProductos,T);

    mostrarArray(listadoProductos,T);

    do
    {
        printf("1-ALTAS\n2-BAJA\n3-MODIFICACION\n4-MOSTRAR\n");
        printf("\nIngrese una opcion por favor: ");
        fflush(stdin);
        scanf("%d",&opcion);

        while(opcion<1||opcion>4)
        {
            printf("\nLa opcion ingresada no es valida.\n\nVuelva a ingresar una opcion por favor: ");
            scanf("%d",&opcion);
        }
        //opcion=opcionF();

        switch(opcion)
        {
            case 1:
                insertarProducto(listadoProductos,T);
                break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos,T);
                break;
            case 4:
                mostrarArray(listadoProductos,T);
                break;
        }
    }while(opcion!=10);

    return 0;
}



