/*
PARA LA SEMANA QUE VIENE HACER FUNCIONES:       1-cargarEnteros
                                                2-mostrar
                                                3-ordenar
                                                4-calcularMaximo
                                                5-devolverPromedio

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void mostrarArray(int* , int);

int main()
{
    /*int valor = 99;
    int* p;
    int* q;

    p = &valor;
    q = p;

    printf("%d\n", *q);*/

    int vectorEnteros[5] = {5,9,7,8,1};

    mostrarArray(vectorEnteros, 5);



    /*
    printf("%d\n", puntero);//variable
    printf("%d\n", puntero+1);//&variable[1]
    printf("%d\n", puntero+2);//&variable[2]
    printf("%d\n", puntero+3);//&variable[3]
    printf("%d\n\n", puntero+4);//&variable[4]

    printf("%d\n", *(puntero+0));//&variable[0]
    printf("%d\n", *(puntero+1));//&variable[1]
    printf("%d\n", *(puntero+2));//&variable[2]
    printf("%d\n", *(puntero+3));//&variable[3]
    printf("%d\n\n", *(puntero+4));//&variable[4]

    printf("%d\n", variable[0]);//variable]
    printf("%d\n", variable[1]);//&variable[1]
    printf("%d\n", variable[2]);//&variable[2]
    printf("%d\n", variable[3]);//&variable[3]
    printf("%d\n", variable[4]);//&variable[4]
    */

    return 0;
}

void mostrarArray(int* pArray, int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n", *(pArray+i));//*variable[i]
    }
}
