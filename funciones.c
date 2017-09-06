#include <stdio.h>

int funcion_SUMA(float numero1,float numero2,float *rSuma)
{
    *rSuma=numero1+numero2;
    printf("\n\nel resultado de la suma es : %.2f\n\n",*rSuma);
    return 0;
}
int funcion_RESTA(float numero1,float numero2,float *rResta)
{
    *rResta=numero1-numero2;
    printf("\n\nel resultado de la resta es : %.2f \n\n",*rResta);
    return 0;
}
int funcion_Division(float numero1,float numero2,float *rDivision)
{
    if(numero2<1)
    {
        printf("eRROR");
    }
    *rDivision=numero1/numero2;
    printf("\n\n el resultado de la division %.2f\n\n",*rDivision);
    return 0;
}
int funcion_Multiplicacion(float numero1,float numero2,float *rMultiplicacion)
{
    *rMultiplicacion=numero1*numero2;
    printf("\n\n el resultado de la multiplicacion es : %.2f\n\n",*rMultiplicacion);
    return 0;
}
int funcion_Factorial(float numero1,float numero2,float *rFactorial)
{
    float fact=1;
     for (numero2 = numero1; numero2 > 1; numero2--)
        {
            fact = fact * numero2;
        }
        *rFactorial=fact;
        printf("\n\nel resultado del factorial del primer numero es :%.2f\n\n",*rFactorial);

    return 0;
}
