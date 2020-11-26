#include<stdio.h>
int main()
{#include<stdio.h>
 
int main()
{
    float x,a,b;
    int c;
    scanf("%f",&x);
    if(x>=0&&x<=400.00){
        a=(x+(x*.15));
        b=(x*.15);
        c=15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
    else if(x>=400.01&&x<=800.00){
        a=x+(x*.12);
        b=(x*.12);
        c=12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
     else if(x>=800.01&&x<=1200.00){
        a=x+(x*.1);
        b=(x*.1);
        c=10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
     else if(x>=1200.01&&x<=2000.00){
        a=x+(x*.07);
        b=(x*.07);
        c=7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
     else if(x>2000.00){
        a=x+(x*.04);
        b=(x*.04);
        c=4;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
    return 0;
}