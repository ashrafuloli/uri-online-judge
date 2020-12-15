#include<stdio.h>

int main(){

    int N,k=0;
    
    int i,min;

    scanf("%d",&N);

    int X[N];
    for ( i = 0; i < N; i++)

    {
        
       scanf("%d",&X[i]);
    }
    
      min=X[k];
    for(i=0 ; i<N ; i++)
    {
        if(X[i]<min)
        {
            min=X[i];
            k=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",X[k],k);
     

    return 0;
}