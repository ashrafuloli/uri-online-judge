#include<stdio.h>
#include<math.h>
int main() {
    double x,floorPos,floorNeg,floor;
    scanf("%lf",&x);
    floorPos= ((x-(int)(x)) >= 0 ? (int)(x):(int)(x-1));
    floorNeg= ((x-(int)(x)) < 0 ? (int)(x-1) : (int)(x));
    floor= (((x) > 0) ? floorPos : floorNeg);

   printf("The Floor of %lf is %lf\n", x,floor);

    return 0;
}