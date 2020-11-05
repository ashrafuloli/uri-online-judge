#include<stdio.h>
#include<math.h>
int main() {
    double x,ceilPos,ceilNeg,ceiling;
    scanf("%lf",&x);
    ceilPos= ((x-(int)(x)) > 0 ? (int)(x+1) : (int)(x));
    ceilNeg= ((x-(int)(x)) <= 0 ?  (int)(x): (int)(x+1));
    ceiling= (((x) > 0) ? ceilPos : ceilNeg);

   printf("The ceil of %lf is %lf\n", x,ceiling);

    return 0;
}