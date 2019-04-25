#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char nombre[50];
    char codigoDeBarra[13];
    char fechaVencimiento[50];
    char proveedor[50];
    float precio;
    int indice;

}eProducto;

#endif // PRODUCTO_H_INCLUDED

eProducto pedirProducto();
void mostrarProducto(eProducto);
void construirArray(eProducto[], int);
void cargarArray(eProducto[], int);
void mostrarArray(eProducto[], int);
int insertarProducto(eProducto,eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);

//int editarProducto(eProducto,eProducto[]);
