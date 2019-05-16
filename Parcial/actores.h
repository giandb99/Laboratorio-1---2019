#ifndef ACTORES_H_INCLUDED
#define ACTORES_H_INCLUDED

typedef struct
{
    int id;
    char nombre[50];
    char paisOrigen[50];
    int estado;
}eActor;

void inicializarActores(eActor lista[],int);
void harcodearActores(eActor lista[],int);
void mostrarActores(eActor lista[],int);
void ordenarActoresPorPais(eActor lista[],int tam);

#endif // ACTORES_H_INCLUDED
