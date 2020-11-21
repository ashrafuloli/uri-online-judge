#include<stdio.h>
int main()
{
    int num, i, j, k, spy = 0;

    scanf("%d", &num);

    for(i = 0;i < num;i++)
    {
        scanf("%d", &j);
        for(k = 1;k < j;k++)
        {
            if(j%k == 0){
                spy += k;
            }
        }

        if(spy == j){
            printf("%d eh perfeito\n", j);
        }

        else{

            printf("%d nao eh perfeito\n", j);

        } 
        spy = 0;
    }
    return 0;
}