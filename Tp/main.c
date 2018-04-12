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

                resultado=sumar(A,B);
                printf("El resultado de la suma es %f\n",resultado);
                break;

            case 4: //resta

                resultado=restar(A,B);
                printf("El resultado de la resta es %f\n",resultado);
                break;


            case 5: //division

                resultado=division(A,B);
                printf("El resultado de la resta es %f\n",resultado);
                break;

            case 6: //multiplicacion

                resultado=multiplicacion(A,B);
                printf("El resultado de la multiplicacion es %f\n",resultado);
                break;

            case 7:

                resultado=factorial(A);
                printf("El resultado es: %f\n",resultado);
                break;*/
            case 8:

                resultado=sumar(A,B);
                printf("El resultado de la suma es %f\n",resultado);
                resultado=restar(A,B);
                printf("El resultado de la resta es %f\n",resultado);
                resultado=division(A,B);
                printf("El resultado de la resta es %f\n",resultado);
                resultado=multiplicacion(A,B);
                printf("El resultado de la multiplicacion es %f\n",resultado);
                resultado=factorial(A);
                printf("El resultado es: %f\n",resultado);
                break;
            case 9:

                seguir = 'n';
                break;
        }

    }


        return 0;
}
