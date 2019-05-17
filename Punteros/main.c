#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** \brief permite cargar un caracter
*
* \param el char a cargar
* \return int [0] -> Si no se pudo cargar el caracter
              [1] -> Si se pudo cargar el caracter
*
*/
int getCaracter(char*);
void mostrarLetra(char*);

int main()
{
    int estado;
    char letra;

    estado = getCaracter(&letra);

    if(estado == 1)
    {
        printf("\nDato cargado con exito\n");
        mostrarLetra(&letra);
    }
    else
    {
        printf("\nEl dato no fue cargado!!!\n");
    }

    return 0;
}

int getCaracter(char* pLetra)
{
    int cargo = 0;
    if(pLetra != NULL)
    {
        printf("Ingrese una letra: ");
        fflush(stdin);
        scanf("%c", pLetra);
        cargo = 1;
    }

    return cargo;
}

void mostrarLetra(char* pLetra)
{
    if(pLetra!=NULL)
    {
        printf("\nLa letra ingresada es: %c\n", *pLetra);
    }
}
