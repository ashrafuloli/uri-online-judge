#include<stdio.h>
int main()
{
    int num=2002,input;
    while(1){
                scanf("%d",&input);

    if(input==num)
    {
        printf("Acesso Permitido\n");
        break;
    }
    else
    {
        printf("Senha Invalida\n");
    }
    }
    return 0;

}
