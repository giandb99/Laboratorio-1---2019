#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct
{
    int id;
    int codigoPelicula;
    char titulo[50];
    int fechaEstreno;
    char genero[4][50];//=("accion","comedia","terror","otro");
    char actorPrincipal[50];
    int estaVacio;
}ePelicula;

/*typedef struct
{
    int id;
    char nombre[5][50]=("Julieta Roberto","Roberto Deniro","Richar Darin","Tita Merelo","Sandro");
    char paisOrigen[5][50]=("EEUU","EEUU","Argentina","Argentina","Argentina");
}eActores;*/

void cargarPelicula(ePelicula[],int);
void mostrarPelicula(ePelicula listado[],int tam);


#endif // PELICULAS_H_INCLUDED
