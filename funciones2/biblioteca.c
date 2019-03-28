int cambiarValor(int valor)
{
    valor=999;
    return 0;
}

int cambiarValorReferencia(int* valor)
{
    printf("El valor es: %d ",*valor);
    *valor=999;

    return 1;
}

int saludar()
{
    printf("Hola biblioteca");
    return 0;
}

int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta=esDistintoDeCero(numero);
    if(respuesta == 1)
    {
        resultado = numero/2;
    }
    return respuesta;
}

int esDistintoDeCero(int numero)
{
    if(numero != 0)
    {
        return 1;
    }
    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;
}

int dividirPorReferencia(int datoUno, int datoDos, float *respuesta)
{
    if(datoUno!=0)
    {
        *respuesta=(float)datoUno/datoDos;
        return 1;
    }
    return 0;
}

int esUnNumero(char *cadena)
{
    int i=0;
    int retorno=0;

    //printf("\nPalabra por parametros: %s\n", cadena);

    while(cadena[i]!='\0')
    {
        if(cadena[i]<'0'|| cadena[i]>'9')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    if(cadena[i]=='\0')
    {
        retorno=1;
    }
    return retorno;
}
