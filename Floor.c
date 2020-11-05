#include<stdio.h>
#include<math.h>

 int main() {
   double a;
   double result;
   scanf("%lf",&a);

   result = floor(a);

   printf("with build in : %lf\n",result);

   if (a== (int)a){
       result = a;

   }
   else if (a<0){
       result = ((int)a-1);
   }
   else 
   {
       result = (int)a;
   }

   printf("without build in : %lf\n",result);

    return 0;
}