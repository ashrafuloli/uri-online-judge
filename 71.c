#include<stdio.h>

int main()
{
    int firstNum, secNum, number, sum=0;
    scanf("%d %d",&firstNum,&secNum);
    for(number=secNum+1; number<firstNum; number++)
    {
        if(number%2!=0)
        {
            sum+=number;
        }
    }
    printf("%d\n",sum);
    return 0;
}