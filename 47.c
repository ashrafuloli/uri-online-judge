#include <stdio.h>

int main()
{
int s_hr,s_min,e_hr,e_min,d_hr,d_min;

scanf("%d%d%d%d",&s_hr,&s_min,&e_hr,&e_min);

d_hr=e_hr-s_hr;

if(d_hr<0)
{
d_hr=24+d_hr;
}

d_min=e_min-s_min;

if(d_min<0)
{
d_min=60+d_min;

d_hr--;

if(d_hr<0)

{
d_hr=24+d_hr;
}

}


if(d_hr==0 && d_min==0)
{
printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}
else
{
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",d_hr,d_min);
}
return 0;
}