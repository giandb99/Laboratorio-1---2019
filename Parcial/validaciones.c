/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"

int getInt(char mensaje[])
{
    char auxiliarChar[10];
    int enteroADevolver;

    printf("%s",mensaje);
    scanf("%s",auxiliarChar);
    fflush(stdin);
    enteroADevolver=atoi(auxiliarChar);

    while(enteroADevolver==0||enteroADevolver<100||enteroADevolver>999)
    {
        printf("\nERROR. Ha ingresado una letra o un valor igual a 0. Reingrese un numero de tres cifras: ");
        scanf("%s",auxiliarChar);
        fflush(stdin);
        enteroADevolver=atoi(auxiliarChar);
    }
    return enteroADevolver;
}

int getIntB(char mensaje[])
{
    char auxiliarChar[10];
    int enteroADevolver;

    printf("%s",mensaje);
    scanf("%s",auxiliarChar);
    fflush(stdin);
    enteroADevolver=atoi(auxiliarChar);

    while(enteroADevolver==0||enteroADevolver<1894||enteroADevolver>2025)
    {
        printf("\nERROR. Ha ingresado una letra o un valor invalido. Reingrese un valor entre 1894 y 2025: ");
        scanf("%s",auxiliarChar);
        fflush(stdin);
        enteroADevolver=atoi(auxiliarChar);
    }
    return enteroADevolver;
}

void getString(char mensaje[], char input[])
{
    printf("%s", mensaje);
    setbuf(stdin, NULL);
    scanf("%s", input);
}

int esSoloLetras(char str[])
{
   int i = 0;
   int esLetra = 1;

   while(str[i] != '\0')
   {
        if((str[i] != ' ') && (str[i] < 'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            esLetra = 0;
            break;
        }
        i++;
   }
   return esLetra;
}

int getStringLetras(char mensaje[], char input[])
{
     char aux[256];
     int bandera = 0;

     getString(mensaje, aux);
     if(esSoloLetras(aux))
     {
        strcpy(input, aux);
        bandera = 1;
     }
    return bandera;
}

void getStringValidacion(char mensaje[], char input[])
{
    while(1)
    {
        if (getStringLetras(mensaje,input) == 1)
        {
            printf("\nSolo debe ingresar letras\n");
            continue;
        }
        setbuf(stdin, NULL);
        break;
    }
}
*/
