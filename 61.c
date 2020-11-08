#include <stdio.h>
#include <string.h>
int main()
{
    
    int event, solution1, solution2, day1, day2, hour1, hour2, min1, min2, sec1, sec2,i,j,k,n;
    scanf("%*s %d ", &day1);
    scanf("%d : %d : %d ", &hour1, &min1,&sec1);
    
    scanf("%*s %d ", &day2);
    scanf("%d : %d : %d ", &hour2, &min2,&sec2);
    
    solution1 = sec1 + (min1*60) + (hour1*(60*60)) + (day1*(24*60*60));
    solution2 = sec2 + (min2*60) + (hour2*(60*60)) + (day2*(24*60*60));
    
    event = solution2 - solution1;
    i = event / 86400;
   event %= 86400;
   
    j = event / 3600;
    event %= 3600;
    
    k = event / 60;
    event %= 60;
    
    n = event/1;
    event %=1;
    
    printf("%d dia(s)\n", i);
    printf("%d hora(s)\n", j);
    printf("%d minuto(s)\n", k);
    printf("%d segundo(s)\n", n );
    return 0;
}