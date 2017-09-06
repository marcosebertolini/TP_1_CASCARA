#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float x,y,resultadoSuma,resultadoResta,resultadoDivision,resultadoMultiplicacion,resultadoFactorial;
    printf("Ingrese numero 1: \n\n ");
    scanf("%f",&x);
    printf("Ingrese numero 2: \n\n ");
    scanf("%f",&y);
    while(seguir=='s')
    {

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial del primer numero (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 3:
                funcion_SUMA(x,y,&resultadoSuma);
                break;
            case 4:
                funcion_RESTA(x,y,&resultadoResta);
                break;
            case 5:
                funcion_Division(x,y,&resultadoDivision);
                break;
            case 6:
                funcion_Multiplicacion(x,y,&resultadoMultiplicacion);
                break;
            case 7:
                funcion_Factorial(x,y,&resultadoFactorial);
                break;
            case 8:
                funcion_SUMA(x,y,&resultadoSuma);
                funcion_RESTA(x,y,&resultadoResta);
                funcion_Division(x,y,&resultadoDivision);
                funcion_Multiplicacion(x,y,&resultadoMultiplicacion);
                funcion_Factorial(x,y,&resultadoFactorial);
                break;
            case 9:
                seguir = 'n';
                break;
        }


   }

 return 0;

}
