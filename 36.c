
#include<stdio.h>

#include<math.h>

int main()

{

    double a,b,c,r1,r2,m;

    scanf("%lf %lf %lf",&a,&b,&c);

    m=(b*b)-(4*a*c);

    r1=(-b+sqrt(m))/(2*a);

    r2=(-b-sqrt(m))/(2*a);

 if(m<0)
    {
        printf("Impossivel calcular\n");
    }
    else if (a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);


    }
    return 0;
}
    
