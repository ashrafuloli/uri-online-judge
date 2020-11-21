#include<stdio.h>

int main()
{
    long long int N,L;
    while(scanf("%lld",&N)!=EOF){
        scanf("%lld",&L);
        printf("%lld\n",N*L);
    }
    return 0;
}