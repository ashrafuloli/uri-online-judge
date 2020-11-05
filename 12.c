#include<stdio.h>
#define pi 3.14159
int main() {
    double A,B,C,triangle,circle,trapezium,square,rectangle;
    
    scanf("%lf%lf%lf",&A,&B,&C);
     
     triangle = (A*C)/2.0;
     circle = pi *(C*C);
     trapezium = ((A+B)/2.0)*C;
     square = B*B;
     rectangle = A*B;

    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);




    return 0;
}