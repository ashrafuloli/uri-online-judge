#include<stdio.h>
int main()
{
    float x,a,b,c,tax;
    scanf("%f",&x);
    if(x<=2000.00){
        printf("Isento\n");
    }
    else if(x>=2000.01&&x<=3000.00){
        tax=(x-2000.01)*.08;
        printf("R$ %.2f\n",tax);
    }
    else if(x>=3000.01&&x<=4500.00){
        tax=(999.99*.08)+((x-3000.01)*.18);
        printf("R$ %.2f\n",tax);
    }
    else if(x>4500){
        tax=(999.99*.08)+(1499.99*.18)+((x-4500.00)*.28);
        printf("R$ %.2f\n",tax);
    }
    return 0;
}