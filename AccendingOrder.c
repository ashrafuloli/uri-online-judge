#include<stdio.h>
#include<math.h>
 int main() 
{

    int a,b,c;
    int big,medium,small;

   while (1)
 { 
    scanf("%d %d %d",&a, &b, &c);
    

    if (a==b && b==c && c==a)
    {
        break;
    }
    

    else if (a>=b && a>=c)
    {
        big = a;

        if (b>c)
        {
            medium = b;
            small = c;
        } 
        else
        {

            medium = c;
            small = b;
            
        }
        

    }

    else if (b>=a && b>=c)
    {
        big = b;

        if (a>c)
        {
            medium = a;
            small = c;
        } 
        else
        {
            medium = c;
           small = a;
        }
        

    }

    else if (c>=a && c>=b)
    {
       big = c;

        if (a>b)
        {
             medium = a;
            small = b;
            
        } 
        else
        {
           medium = b;
            small = a;
        }
        
    }
    

    printf("%d %d %d\n", big,medium,small);
          printf("\n");
   

 }

  printf("Finished"); 
   printf("\n");

    return 0;
}