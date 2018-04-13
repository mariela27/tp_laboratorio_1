
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float sumar(float A, float B)
{
    float suma;

    suma = A + B;
    return (suma);
}

float restar(float A, float B)
{
    float resta;

    resta = A - B;

    return (resta);
}


float division(float A, float B)
{
    float d;

    if(B==0)
    {
        printf("\n\nIngrese un valor distinto a 0 para el divisor:\n\n");
        scanf("%f",&B);
    }
    d = A / B;


    return d;
}


float multiplicacion(float A, float B)
{
    float m;

    m = A*B;

    return m;
}


int factorial(float A)
{
    int i=0;
    int factorial=1;
    if(A-(int)A!=0||A<0)
    {
        printf("Error el operando debe ser positivo y entero.\n");
    }
    else
    {

        for (i=A; i>0; i--)
        {
            factorial=factorial*i;
        }
    }
        return factorial;
}

