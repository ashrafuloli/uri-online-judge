#include<stdio.h>
int main() {
int x1[2],y1[2];
float x2[1],y2[1],total;

scanf("%d %d %f", &x1[0], &x1[1], &x2[0]);
scanf("%d %d %f", &y1[0], &y1[1], &y2[0]);
total=(x1[1]*x2[0])+(y1[1]*y2[0]);

printf("VALOR A PAGAR: R$ %.2f\n",total);


    return 0;
}