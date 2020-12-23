#include<stdio.h>
int main()
{
    int i,j,k;
    while(1){
        scanf("%d", &j);
        if(j == 0)break;
        
        for(k = 1;k < j;k++){
            printf("%d ",k);
        }
        printf("%d\n",j);
    }
    return 0;
}
