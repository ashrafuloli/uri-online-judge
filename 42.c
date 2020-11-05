#include<stdio.h>
#include<math.h>
 int main() 
{

    int a,b,c;
    int big,medium,small;

   
    scanf("%d %d %d",&a, &b, &c);
    

    if (a==b && b==c && c==a)
    {
        big = a;
        medium = b;
        small = c;
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
    
    

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",small,medium,big,a,b,c);
         
   



  
    return 0;
}