
#include<stdio.h>
int main()
{
    int line,space,star, number;

    scanf("%d",&number);

    for ( line= 0; line < number; line++)
    {

           for (space = (number - 1); space > line; space--)
           {
               printf(" ");
           }
           
           for (star = 0; star < ( 2 * line) + 1 ; star++)
           {
              printf("*");
           }
           

       printf("\n");
    }

    printf("game over");
    
    return 0;
}



