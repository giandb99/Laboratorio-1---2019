#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include "biblioteca.c"

int saludar();
int dividir(int numero);
int esDistintoDeCero(int numero);
int factorial(int numero);
int cambiarValor(int valor);
int cambiarValorReferencia(int* valor);
int dividirPorReferencia(int dato1, int dato2, float *respuesta);
int esUnNumero(char *cadena);

#endif // BIBLIOTECA_H_INCLUDED
