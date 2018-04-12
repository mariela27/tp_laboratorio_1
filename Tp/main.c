#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float A;
    float B;
    float resultado;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%f)\n",A);
        printf("2- Ingresar 2do operando (B=%f)\n",B);
        printf("3-suma (A+B)\n");
        printf("4-resta (A-B)\n");
        printf("5-division (A/B)\n");
        printf("6-multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
             case 1:
                printf("\n\nIngrese numero:");
                scanf("%f",&A);
                break;

            case 2:
                printf("\n\nIngrese numero:");
                scanf("%f",&B);
                break;

            case 3: //suma

                printf("\nIngrese el primer numero:");
                scanf("%f",&A);
                printf("\nIngrese el segundo numero:");
                scanf("%f",&B);
                resultado=A+B;
                printf("\nEl resultado es: %.2f \n",A,B,resultado);
                break;

            case 4: //resta

                printf("\nIngrese el primer numero:");
                scanf("%f",&A);
                printf("\nIngrese el segundo numero:");
                scanf("%f",&B);
                resultado=A-B;
                printf("\nEl resultado es: %.2f \n",A,B,resultado);
                break;

            case 5: //division

                printf("\nIngrese el dividendo:");
                scanf("%f",&A);
                printf("\nIngrese el divisor:");
                scanf("%f",&B);
                resultado=A/B;
                printf("\n\nEl resultado es: %.2f \n",A,B,resultado);
                break;

            case 6: //multiplicacion

                printf("\nIngrese el multiplicando:");
                scanf("%f",&A);
                printf("\nIngrese el multiplicador:");
                scanf("%f",&B);
                resultado=A*B;
                printf("\n\nEl resultado es: %.2f \n",A,B,resultado);
                break;

            case 7:

                resultado=factorial(A);
                printf("\n\nEl resultado es: %.2f \n\n",resultado);
                break;
            case 8:

                printf("A=%.2f\nB=%.2f\n",A,B);
                printf("Resultado de la SUMA es: %f\n",suma(A+B));
                printf("Resultado de la RESTA es: %f\n",resta(A-B));
                printf("Resultado de la MULTIPLICACION es: %f\n",multiplicacion(A*B));
                printf("Resultado de la DIVICION es: %f\n",division(A/B));
                printf("El Factorial de A es %f\n",factorial(A));
                break;
            case 9:

                seguir = 'n';
                break;
        }

    }


        return 0;
}
