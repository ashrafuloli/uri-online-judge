#include<stdio.h>
 #include<string.h>

int main() {
    char firstName;
    double fixedSalary,sale,totalSalary;

    scanf("%s",firstName);

    scanf("%lf %lf",&fixedSalary,&sale);
    totalSalary=fixedSalary + 0.15*sale;
    printf("TOTAL = R$ %.2lf\n",totalSalary);

    
    return 0;
}