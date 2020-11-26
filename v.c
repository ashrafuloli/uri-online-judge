#include<stdio.h>
#include<math.h>
#include<float.h>
int main()
{
    double N;

     float result,result1,result2,result3,result4,result5,result6,result7,result8,result9,result10,result11,result12,result13,result14,N2,re,re1,re2,re3,re4,re5,re6,re7,re8,re9,re10,re11;
     int r1,r2,r3,r4,r5,r6,r7,n,r8,r9,r10,r11,r12;

    scanf("%lf",&N);



    printf("NOTAS:\n");


    result=fmodf(N,100.00);
    result1=fmodf(result,100.00);
    result2=fmodf(result1,50.00);
    result3=fmodf(result2,20.00);
    result4=fmodf(result3,10.00);
    result5=fmodf(result4,5.00);
    result6=fmodf(result5,2.00);
    result7=fmodf(result6,1.00);


    result8=(N/100);
    r1=result8;
    printf("%d nota(s) de R$ 100.00\n",r1);

    result9=(result1/50);
    r2=result9;
     printf("%d nota(s) de R$ 50.00\n",r2);

     result10=(result2/20);
     r3=result10;
      printf("%d nota(s) de R$ 20.00\n",r3);

     result11=(result3/10);
     r4=result11;
      printf("%d nota(s) de R$ 10.00\n",r4);

       result12=(result4/5);
       r5=result12;
      printf("%d nota(s) de R$ 5.00\n",r5);

       result13=(result5/2);
       r6=result13;
      printf("%d nota(s) de R$ 2.00\n",r6);

      printf("MOEDAS:\n");

      result14=(result6/1);
       r7=result14;
      printf("%d nota(s) de R$ 1.00\n",r7);



      n=N;
      N2=(N-n);
      n=N2*1000;


    re1=fmodf(n,500);
    re2=fmodf(re1,250);
    re3=fmodf(re2,100);
    re4=fmodf(re3,50);
    re5=fmodf(re4,10);



    re7=(n/500);
    r8=re7;
     printf("%d nota(s) de R$ 0.50\n",r8);

     re8=(re1/250);
     r9=re8;
      printf("%d nota(s) de R$ 0.25\n",r9);

     re9=(re2/100);
     r10=re9;
      printf("%d nota(s) de R$ 0.10\n",r10);

       re10=(re3/50);
       r11=re10;
      printf("%d nota(s) de R$ 0.05\n",r11);

       re11=(re4/10);
       r12=re11;
      printf("%d nota(s) de R$ 0.01\n",r12);

      return 0;
}