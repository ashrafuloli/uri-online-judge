#include<stdio.h>
#include<math.h>
 int main() 
{

    int a,b,c;
    int small,medium,big;

   while (1)
 { 
    scanf("%d %d %d",&a, &b, &c);
    

    if (a==b && b==c && c==a)
    {
        break;
    }
    

    else if (a<=b && a<=c)
    {
        small = a;

        if (b<c)
        {
            medium = b;
            big = c;
        } 
        else
        {

            medium = c;
            big = b;
            
        }
        

    }

    else if (b<=a && b<=c)
    {
        small = b;

        if (a<c)
        {
            medium = a;
            big = c;
        } 
        else
        {
            medium = c;
           big = a;
        }
        

    }

    else if (c<=a && c<=b)
    {
        small = c;

        if (a<b)
        {
             medium = a;
            big = b;
            
        } 
        else
        {
           medium = b;
            big = a;
        }
        
    }
    

    printf("%d %d %d\n", small,medium,big);
          printf("\n");
   

 }

  printf("Finished"); 
   printf("\n");

    return 0;
}