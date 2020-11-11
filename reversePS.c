#include<stdio.h>
int main()
{
    int line,space,star, number;

    scanf("%d",&number);

    for ( line= number; line >0; line--)
    {

           for (space = 0; space <number-line ; space++)
           {
               printf(" ");
           }
           
           for (star = 1; star < ( 2 * line)  ; star++)
           {
              printf("*");
           }
           

       printf("\n");
    }

    printf("game over");

     printf("\n");
    
    return 0;
}