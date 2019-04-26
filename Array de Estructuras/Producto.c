#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("\nIngrese el nombre del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    printf("\nIngrese el nombre del proveedor del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);

    printf("\nIngrese el codigo de barras del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("\nIngrese la fecha de vencimiento del producto: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaVencimiento);

    printf("\nIngrese el precio del producto: ");
    scanf("%f",&productoParaRetornar.precio);


    return productoParaRetornar;
}

void mostrarProducto(eProducto unProducto)
{
     printf("%15s--%15s--%15s--%15s--%10f--%5d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}

void inicializarProductos(eProducto listado[],int tam);
{
    char nombre[3][50]={"Agua","Alfajor","Turron"};
    char codigoDeBarra[3][13]={"77951234","77959876","77955678"};
    char fechaVencimiento[3][50]={"22/10/2020","05/06/2019","12/02/2018"};
    char proveedor[3][50]={"Coca-Cola","Bagley","Arcor"};
    float precio[3]={"50","42.95","9.52"};

    int i;
    for(i=0;i<3;i++)
    {
        strcpy(listado[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listado[i].nombre,nombre[i]);
        strcpy(listado[i].fechaVencimiento,fechaVencimiento[i]);
        strcpy(listado[i].proveedor,proveedor[i]);
        listado[i].precio=precio[i];
        listado[i].estado=OCUPADO;
    }
}

void mostrarArray(eProducto listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }
    }
}

void construirArray(eProducto listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        lista[i].estado=LIBRE;
        strcpy(lista[i].nombre,"nn");
        strcpy(lista[i].proveedor,"nn");
        strcpy(lista[i].codigoDeBarra,"nn");
        strcpy(lista[i].fechaVencimiento,"nn");
        lista[i].precio=0;
    }
}

int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice=dameLugarLibre(listado,tam);
    if(indice!=-1)
    {
        listado[indice]=pedirProducto();
    }
    return indice;
}

int dameLugarLibre(eProducto listado[], int tam);
{
    int i;
    int index;
    for(i=0;i<tam;i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index=i;
            break;
        }
    }
    return index;
}

int existeProducto(eProducto elProducto ,eProducto listado[]);
{

}

int borrarProducto(eProducto listado[], int tam)
{
    int i;
    int loEncontro;
    char codigo[50];

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0;i<tam;i++)
    {
        if(strcmp(listado[i].codigoDeBarra,codigo)==0)
        {
            listado[i].estado=LIBRE;
            loEncontro=1;
            break;
        }

    return indice;
}

int editarProducto(eProducto listado[], int tam);
{
    int i;
    int loEncontro;
    char codigo[50];

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0;i<tam;i++)
    {
        if(strcmp(listado[i].codigoDeBarra,codigo)==0)
        {
            //OK
            printf("Ingrese el nuevo precio: ");
            scanf("%f",&listado[i].precio);
            loEncontro=1;
            break;
        }

    }
}

/*int opcionF()
{
    int opcion;

    printf("\nIngrese una opcion por favor: ");
    fflush(stdin);
    scanf("%d",&opcion);

    while(opcion<1||opcion>5)
    {
        printf("\nLa opcion ingresada no es valida.\n\nVuelva a ingresar una opcion por favor: ");
        scanf("%d",&opcion);
    }
    return opcion;
}*/
