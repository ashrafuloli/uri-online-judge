#include<stdio.h>
int main()
{
    int positive_count = 0,n=0;
    float a;
    while(n!=6){
        scanf("%f",&a);
        if(a>=0){
         positive_count++;
        }
        n++;
    }
    printf("%d valores positivos\n", positive_count);
    return 0;
}