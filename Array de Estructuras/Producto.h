#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

typedef struct
{
    char nombre[50];
    char proveedor[50];
    char codigoDeBarra[13];
    char fechaVencimiento[50];
    float precio;
    int indice;
}eProducto;

#endif // PRODUCTO_H_INCLUDED

eProducto pedirProducto();

void mostrarProducto(eProducto);

void inicializarProductos(eProducto[],int);

void mostrarArray(eProducto[],int);

void construirArray(eProducto[],int);

int insertarProducto(eProducto[],int);

int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto[],eProducto);

int borrarProducto(eProducto[],int);

int editarProducto(eProducto[],int);

int opcionF();



