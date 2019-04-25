#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"


//int editarProducto(eProducto,elProducto[]);

int insertarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=dameLugarLibre(listado);
    if(indice!=-1)
    {
        listado[indice]=elProducto;
    }
    return indice;
}

int borrarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=existeProducto(elProducto,listado);
    if(indice!=-1)
    {
        listado[indice].estado=-1; //listado[indice].estado=0;
    }
    return indice;
}

void construirArray(eProducto listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        lista[i].estado=0;
        strcpy(lista[i].nombre,"nn");
        strcpy(lista[i].codigoDeBarra,"nn");
        strcpy(lista[i].fechaVencimiento,"nn");
        strcpy(lista[i].proveedor,"nn");
        lista[i].precio=0;
    }
}

void mostrarArray(eProducto listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarProducto(listado[i]);
    }
}

void cargarArray(eProducto listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i]=pedirProducto();
    }
}

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("\nIngrese el nombre del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("\nIngrese el codigo de barras del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("\nIngrese la fecha de vencimiento del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaVencimiento);

    printf("\nIngrese el precio del producto: ");
    scanf("%f",&productoParaRetornar.precio);

    printf("\nIngrese el nombre del proveedor del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    return productoParaRetornar;
}

void mostrarProducto(eProducto parametroProducto)
{
    printf("\n\n\n \t\t<<<< Producto >>>> \n");
    printf("-------------------------------\n");
    printf("Producto:\t %s",parametroProducto.nombre);
    printf("Codigo de barras:\t %s",parametroProducto.codigoDeBarra);
    printf("Fecha de vencimiento:\t %s",parametroProducto.fechaVencimiento);
    printf("Precio:\t %s",parametroProducto.precio);
    printf("Proveedor:\t %s\n\n",parametroProducto.proveedor);
}
