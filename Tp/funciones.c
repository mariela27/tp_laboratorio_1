
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


void factorial(float A)
{
    int i=0;
    float A;
    int factorial=1;
    if()
    {

    }
        for (i=A; i>0; i--)
        {
            factorial=factorial*i;
        }
        printf("El factorial es %f\n",factorial);


}

