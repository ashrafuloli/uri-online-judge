#include<stdio.h>
int main()
{
    int n,i,array[100];
    
    printf("Enter how many digits:\n");
    scanf("%d",&n);

    printf("Enter the digits:\n");

    for(i=0;i<n;i++) {
        
        scanf("%d",&array[i]);
    }

    printf("The number is: ");
    

    for(i=0;i< n;i++){

    printf("%d",array[i]);
    }

    return 0;
}