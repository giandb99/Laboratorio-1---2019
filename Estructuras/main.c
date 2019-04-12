#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{
    char nombre[30];
    char apellido[30];
    int edad;
    int nota;

}eAlumno;

void mostrarAlumno(eAlumno);
void cargarAlumnos(eAlumno lista[], int);
void ordenarAlumnos(eAlumno lista[], int);
void mostrarLista(eAlumno lista[], int);

int main()
{
    eAlumno listaAlumnos[TAM];
    eAlumno unAlumno;

    cargarAlumnos(listaAlumnos,TAM);
    ordenarAlumnos(listaAlumnos,TAM);
    mostrarAlumno(unAlumno);
    mostrarLista(listaAlumnos,TAM);

    return 0;
}

void mostrarAlumno(eAlumno unAlumno)
{
    printf("%s---%s---%d---%d",unAlumno.nombre,unAlumno.apellido,unAlumno.edad,unAlumno.nota);
}

void cargarAlumnos(eAlumno lista[], int tam)
{
    int i;
    eAlumno unAlumno;

    for(i=0;i<TAM;i++);
    {
        printf("Ingrese un nombre: ");
        fflush(stdin);
        gets(&unAlumno.nombre);

        printf("Ingrese un apellido: ");
        fflush(stdin);
        gets(&unAlumno.apellido);

        printf("Ingrese edad: ");
        scanf("%d",&unAlumno.edad);

        printf("Ingrese nota: ");
        scanf("%d",&unAlumno.nota);
    }
}

void ordenarAlumnos(eAlumno lista[], int tam)
{
    int i,j;
    eAlumno aux;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
}

void mostrarLista(eAlumno lista[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarAlumno(lista[i]);
    }
}
