#include <stdio.h>
 
int main()
{
    int num,x,i,j,count=0;
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        scanf("%d",&x);

        for(j=1,count=0;j<x;j++){
            if(x%j==0){
            count+=j;
 
    }
        }
        if(count==1){
        printf("%d eh primo\n",x);
    }
    else{
         printf("%d nao eh primo\n",x);
    }
    }
 
    return 0;
}