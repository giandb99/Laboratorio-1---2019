#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"

int main()
{
    eProducto unProducto;
    //unProducto=pedirProducto();
    //mostrarProducto(unProducto);
    //definirArray
    eProducto listadoDeProductos[3];
    //cargarArray
    //cargarArray(3,listadoDeProductos);
    construirArray(listadoDeProductos,3);
    mostrarArray(listadoDeProductos,3);
    //mostrarArray;

    return 0;
}



