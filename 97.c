#include<stdio.h>
int main()
{
 int i,j;
 int a=5,b=7;
 
 for(i = 1; i <= 9; i += 2)
 {
     
  for(j = b; j >= a; j--)
  
  {
   printf("I=%d J=%d\n",i,j);
  }
  a=b;
  b+=2;
 }
 return 0;
}