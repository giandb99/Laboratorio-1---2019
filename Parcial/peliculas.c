#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "peliculas.h"

int opcionA()
{
    int opcion;
    printf("\nElija una opcion por favor: ");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

int opcionB()
{
    int opcion;
    printf("\nIngrese el genero de la pelicula...1-Comedia;2-Accion;3-Terror;4-Otro... : ");
    fflush(stdin);
    scanf("%d",&opcion);
    while(opcion<1||opcion>4)
    {
        printf("\nERROR, Reingrese el genero de la pelicula... (1-4): ");
        fflush(stdin);
        scanf("%d",&opcion);
    }
    return opcion;
}

char respuestaA()
{
    char respuesta;

    printf("[N o S]: ");
    fflush(stdin);
    scanf("%c",&respuesta);

    while(respuesta!='n' && respuesta!='N' && respuesta!='s' && respuesta!='S')
    {
        printf("\nLa opcion ingresada no es valida. Ingrese N o S por favor: ");
        fflush(stdin);
        scanf("%c",&respuesta);
    }
    return respuesta;
}

int mayorIdEstudio(ePelicula listado[],int tam)
{
    int i;
    int bandera=0;
    int aux=998;
    for(i=999;i<tam;i++)
    {
        if(bandera==0||listado[i].id>aux)
        {
            aux=listado[i].id;
            bandera=1;
        }
    }
    return aux;
}

int idF()
{
    int id;
    printf("\nIngrese el ID: ");
    scanf("%d",&id);
    return id;
}

void inicializarPeliculas(ePelicula listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i].estado=1;
        listado[i].id=0;
    }
}

int buscarLibre(ePelicula listado[],int tam)
{
    int i;
    for(i=1;i<tam;i++)
    {
        if(listado[i].estado==1)
        {
            return i;
        }
    }
    return -1;
}

int cargarPeliculas(ePelicula listado[],int auxLibre,int tam)
{
    int i;
    int opcion;
    i=auxLibre;
    //listado[i].id=auxLibre;
    listado[i].id=mayorIdEstudio(listado,tam)+1;

    printf("\nEl id de la pelicula es: %d\n",listado[i].id+1);
    fflush(stdin);

    listado[i].codigoPelicula=getInt("\nIngrese el codigo de la pelicula: ");

    getStringValidacion("\nIngrese el titulo de la pelicula: ", listado[i].titulo);

    listado[i].anioEstreno=getIntB("\nIngrese el anio de estreno de la pelicula: ");

    opcion=opcionB();
    switch(opcion)
    {
        case 1:
            strcpy(listado[i].genero,"Comedia");
            fflush(stdin);
            break;
        case 2:
            strcpy(listado[i].genero,"Accion");
            fflush(stdin);
            break;
        case 3:
            strcpy(listado[i].genero,"Terror");
            fflush(stdin);
            break;
        case 4:
            strcpy(listado[i].genero,"Otro");
            fflush(stdin);
            break;
        default:
            printf("\nLa opcion ingresada no es valida. Reingrese una opcion: ");
            break;
    }

    getStringValidacion("\nIngrese el actor de la pelicula: ", listado[i].actorPrincipal);
    printf("\n");

    listado[i].estado=0;

    system("pause");
    system("cls");

    return 0;
}

int buscarPeliculaPorId(ePelicula listado[],int tam,int id)
{
    int i;
    int opcion;

    for(i=0;i<tam;i++)
    {
        if(id==listado[i].id&&listado[i].estado==0)
        {
            printf("\nSe puede modificar el empleado.\n");
            system("pause");
            system("cls");
            do
            {
                printf("\n1. Modificar titulo\n2. Modificar actor\n3. Modificar fecha de estreno\n");
                printf("\nQue desea modificar? Elija una opcion: ");
                fflush(stdin);
                scanf("%d",&opcion);
                switch(opcion)
                {
                    case 1:
                        getStringValidacion("\nIngrese el nuevo titulo de la pelicula: ", listado[i].titulo);
                        printf("\nDato modificado exitosamente\n");
                        break;
                    case 2:
                        getStringValidacion("\nIngrese el nuevo actor de la pelicula: ", listado[i].actorPrincipal);
                        printf("\nDato modificado exitosamente\n");
                        break;

                    case 3:
                        listado[i].anioEstreno=getIntB("\nIngrese el nuevo anio de estreno: ");
                        printf("\nDato modificado exitosamente\n");
                        break;

                    default:
                        printf("ERROR. La opcion ingresada no es valida\n\n");
                        system("pause");
                        system("cls");
                        break;
                }
            }while(opcion<1||opcion>3);
        }
    }

    if(id==listado[i].id&&listado[i].estado==1)
    {
        printf("\nERROR. El ID ingresado no existe..\n\n");
        system("pause");
        system("cls");
        buscarPeliculaPorId(listado,tam,id);
    }
    return 0;
}

int buscarPeliculaPorCodigo(ePelicula listado[],int tam,int codigo)
{
    int i;
    for(i=0;i <tam; i++)
    {
        if(listado[i].codigoPelicula == codigo && listado[i].estado == 1)
        {
            return i;
        }
    }
    return -1;
}


void mostrarPeliculasSinActores(ePelicula listado[],int tam)
{
    int i;

    printf("\n\t%4s \t%12s \t%12s \t%12s \t%10s\n","ID","Codigo","Titulo","Estreno","Genero");

    for(i=0;i<tam;i++)
    {
        if(listado[i].estado==0)
        {
            printf("\n\t%4d \t%10d \t%12s \t%10d \t%10s\n",listado[i].id,listado[i].codigoPelicula,listado[i].titulo,listado[i].anioEstreno,listado[i].genero);
        }
    }
}

void mostrarPeliculasConActores(ePelicula listado[],int tam)
{
    int i;

    printf("\n\t%4s \t%12s \t%12s \t%12s \t%10s \t%10s\n","ID","Codigo","Titulo","Estreno","Genero","Actor");

    for(i=0;i<tam;i++)
    {
        if(listado[i].estado==0)
        {
            printf("\n\t%4d \t%10d \t%12s \t%10d \t%10s \t%10s\n\n",listado[i].id,listado[i].codigoPelicula,listado[i].titulo,listado[i].anioEstreno,listado[i].genero,listado[i].actorPrincipal);
        }
    }
}

void ordenarPeliculasPorAnioEstreno(ePelicula listado[],int tam)
{
    int i,j;

    ePelicula auxAnio;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(listado[i].anioEstreno>listado[j].anioEstreno)
            {
                auxAnio=listado[i];
                listado[i]=listado[j];
                listado[j]=auxAnio;
            }
        }
    }
}

int borrarPeliculas(ePelicula listado[],int tam,int id)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(id==listado[i].id&&listado[i].estado==0)
        {
            printf("\nLa pelicula %s fue dada de baja exitosamente.\n\n",listado[i].titulo);
            listado[i].estado=-1;
        }
    }
    system("pause");
    system("cls");
    return 0;
}

int getInt(char mensaje[])
{
    char auxiliarChar[10];
    int enteroADevolver;

    printf("%s",mensaje);
    scanf("%s",auxiliarChar);
    fflush(stdin);
    enteroADevolver=atoi(auxiliarChar);

    if(enteroADevolver==auxiliarChar)
    {
        printf("\n\nEL ID YA EXISTE!!!\n");
    }
    else
    {
        while(enteroADevolver==0||enteroADevolver<100||enteroADevolver>999)
        {
            printf("\nERROR. Ha ingresado una letra o un valor igual a 0. Reingrese un numero de tres cifras: ");
            scanf("%s",auxiliarChar);
            fflush(stdin);
            enteroADevolver=atoi(auxiliarChar);
        }
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
        if (getStringLetras(mensaje,input) == 0)
        {
            printf("\nSolo debe ingresar letras\n");
            continue;
        }
        setbuf(stdin, NULL);
        break;
    }
}
