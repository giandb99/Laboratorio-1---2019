#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct
{
    int id;
    int codigoPelicula;
    char titulo[50];
    int anioEstreno;
    char genero[50];//={"accion";"comedia";"terror";"otro"};
    char actorPrincipal[50];
    int estado;
}ePelicula;

int opcionA();
int opcionB();
char respuestaA();
int idF();
int mayorIdEstudio(ePelicula[],int);

void inicializarPeliculas(ePelicula[],int);
int buscarEspacioLibre(ePelicula[],int);
int cargarPeliculas(ePelicula[],int,int);
int buscarPeliculaPorId(ePelicula[],int,int);
int buscarPeliculaPorCodigo(ePelicula[],int,int);
int borrarPeliculas(ePelicula[],int,int);
void ordenarPeliculasPorAnioEstreno(ePelicula[],int);

//void mostrarPeliculasConActores(ePelicula[],int,eActor[],int);

void mostrarPeliculasSinActores(ePelicula[],int);
void mostrarPeliculasConActores(ePelicula[],int);

void inicializarGenerosPelicula(ePelicula[],int);

int getInt(char[]);
int getIntB(char[]);
void getString(char[],char[]);
int getStringLetras(char[],char[]);
int esSoloLetras(char []);
int esSoloNumeros(char str[]);
int esAlfanumerico(char str[]);
void getStringValidacion(char[],char[]);


#endif // PELICULAS_H_INCLUDED
