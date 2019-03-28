#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{
    char letra;
    char palabra[10];
    int numero;
    int es;

    scanf("%s",&palabra);
    fflush(stdin);
    printf("\nPalabra ingresada: %s\n",palabra);

    es=esUnNumero(palabra);
    if(es==1)
    {
        printf("Es correcto.");
    }
    else
    {
        printf("No lo es.");
    }
    /*
    int indice=0;
    while(indice <20)
    {
        if(palabra[indice]=='\0')
        {
             printf("\nEl barra cero esta en: %d", palabra);
        }
        printf("\nLetra %c",palabra[indice]);
        indice++;
    }
    */

    /*
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nNumero: %d\n", numero);

    scanf("%c", &letra);
    fflush(stdin);
    printf("\nLetra: %c\n", letra);
    */



    /*
    saludar();

    int miDato=333;
    cambiarValor(miDato);
    printf("Mi dato es: %d",miDato);
    cambiarValorReferencia(&miDato);
    printf("\nMi dato es: %d",miDato);
    */

    /*
    int unFactorial;
    unFactorial=factorial(8);
    printf("El factorial es : %d\n", unFactorial);
    */

    /*
    int edad;
    int retorno;
    int dato;

    dato=dividir(6);
    printf("El dato es : %d", dato);
    dato=dividir(0);
    printf("\nEl dato es : %d", dato);

    do
    {
        printf("Ingrese una edad: ");
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);

    printf("La respuesta es : %d", retorno);
    printf("\nLa edad es : %d", edad);
    */

    return 0;
}
