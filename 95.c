#include<stdio.h>
int main(){

    int i, j =60;
    for (i = 1 ; i <=37 ; i +=3){
        printf("I=%d J=%d",i,j);
        j -= 5;
        printf("\n");
    }


    return 0;
}