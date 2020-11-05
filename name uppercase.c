#include<stdio.h>
 #include<string.h>

int main() {
    char firstName[100];
    float fixedSalary,sale,totalSalary;

    gets(firstName);
    puts(strupr(firstName));
   
    scanf("%f,%f",&fixedSalary,&sale);
    totalSalary=fixedSalary + 0.15*sale;
    printf("TOTAL  = R$  %.2f\n",totalSalary);

    
    return 0;
}