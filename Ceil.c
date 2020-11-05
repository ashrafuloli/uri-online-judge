#include<stdio.h>
#include<math.h>

 int main() {
   double a;
   double result;
   scanf("%lf",&a);

   result = ceil(a);

   printf("with build in : %lf\n",result);

   if (a== (int)a){
       result = a;

   }
   else if (a<0){
       result = (int)a;
   }
   else 
   {
       result = ((int)a+1);
   }

   printf("without build in : %lf\n",result);

    return 0;
}