#include <stdio.h>

int main()

{

    double a,b,c ,triangle,trapezium;

    scanf("%lf %lf %lf",&a,&b,&c);

    triangle = a+b+c;
    trapezium = 0.5 * c * (a + b);


    if (a < b + c && b < a + c && c < a + b)

    {

        printf("Perimetro = %.1f\n",triangle );

    }

    else

    {

        printf("Area = %.1f\n", trapezium);

    }

    return 0;
}