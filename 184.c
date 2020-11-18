#include<stdio.h>

int main(){

    int i,j;
    int spy;
    int element = 0;
    float number;
    float sum = 0.0;
    char operation;

    scanf("%c",&operation);

    for (i =0 ; i<=11 ; i++){
        for( j=0 ; j<=11 ; j++){
            scanf("%f", &number);
            

            if(i > 0 && j < spy){
                sum += number;
                 element++;
            }
           
        }

         spy++;
        
   
    }

    if(operation == 'S'){

           printf("%.1f\n",sum);
    }
    
    else{
       
       printf("%.1f\n", sum / element);
    }

    

   return 0; 
}