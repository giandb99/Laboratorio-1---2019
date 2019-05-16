#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "peliculas.h"
#include "actores.h"
#define P 3
#define A 5

int main()
{
    int i;
    int opcion;
    char respuesta;
    int auxLibre;
    int auxId;
    int bandera;
    int auxCodigo;

    bandera=0;

    ePelicula listado[P];
    inicializarPeliculas(listado,P);

    eActor listadoActor[A];
    //harcodearActores(listadoActor,A);

    do
    {
        printf("\n~~~~~~~~~~~~~~~~~BIENVENIDO~~~~~~~~~~~~~~~~~\n\n");
        printf(" 1-ALTA\n 2-LISTAR\n 3-MODIFICAR\n 4-BAJA\n 5-SALIR\n");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        opcion=opcionA();

        switch(opcion)
        {
            case 1:
                auxLibre=buscarLibre(listado,P);
                if(auxLibre==-1)
                {
                    printf("\nNo hay lugar disponible.\n");
                    break;
                }
                else
                {
                    printf("\nDesea ingresar una pelicula? ");
                    respuesta=respuestaA();
                    if(respuesta=='n'|| respuesta=='N')
                    {
                        printf("\nNo se ingresara ninguna pelicula\n\n");
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        printf("\nSe ingresara pelicula\n\n");
                        system("pause");
                        system("cls");
                        cargarPeliculas(listado,auxLibre,P);
                        bandera=1;
                    }
                }
                break;

            case 2:
                if(bandera==1)
                {
                    do
                    {
                        printf("\n1-MOSTRAR PELICULAS SIN ACTORES\n2-MOSTRAR PELICULAS CON ACTORES\n3-ORDENAR PELICULAS POR ANIO DE ESTRENO\n4-ORDENAR ACTORES POR PAIS DE ORIGEN\n");
                        opcion=opcionA();
                        switch(opcion)
                        {
                            case 1:
                                mostrarPeliculasSinActores(listado,P);
                                system("pause");
                                system("cls");
                                break;

                            case 2:
                                mostrarPeliculasConActores(listado,P);
                                system("pause");
                                system("cls");
                                break;

                            case 3:
                                ordenarPeliculasPorAnioEstreno(listado,P);
                                mostrarPeliculasConActores(listado,P);
                                system("pause");
                                system("cls");
                                break;

                            case 4:
                                //ordenarActoresPorPais(listadoActor,A);
                                //mostrarActores(listadoActor,A);
                                system("pause");
                                system("cls");
                                break;

                            default:
                                printf("\n\nLa opcion ingresada no es valida\n\n");
                                system("pause");
                                system("cls");
                                break;
                        }
                    }while(opcion<1||opcion>4);
                }
                else
                {
                    printf("\nError.Primero debe ingresar una pelicula.\n\n");
                    system("pause");
                    system("cls");
                }
                break;

            case 3:
                if(bandera==1)
                {
                    system("pause");
                    system("cls");
                    mostrarPeliculasConActores(listado,P);
                    auxId=idF();
                    auxId=buscarPeliculaPorId(listado,P,auxId);
                    mostrarPeliculasConActores(listado,P);
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("\nError.Primero debe ingresar una pelicula.\n\n");
                    system("pause");
                    system("cls");
                }
                break;

            case 4:
                if(bandera==1)
                {
                    mostrarPeliculasConActores(listado,P);
                    auxId=idF();
                    auxId=borrarPeliculas(listado,P,auxId);
                }
                else
                {
                    printf("\nError.Primero debe ingresar una pelicula.\n\n");
                    system("pause");
                    system("cls");
                }
                break;

            case 5:
                printf("\nSALIENDO ...\n");
                break;

            default:
                printf("\nLa opcion ingresada no es valida.\n\n");
                system("pause");
                system("cls");
                break;
        }
    }while(opcion!=5);

    return 0;
}
