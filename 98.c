#include<stdio.h>

int main()
{
    float i,j;
    int m,n;

    for(i=0.0; i<=2.1; i +=0.2)
    {
        for(j=1.0; j<=3.0; j+=1)
        {
            if(i>0.0 && i<1.0)
            {

                printf("I=%.1lf J=%.1lf\n",i,i+j);
            }
            else if(i>1.0 && i<2.0)
            {
                printf("I=%.1lf J=%.1lf\n",i,i+j);
            }

        else
        {
            m=(int) i;
            n=(int) (i+j);
            printf("I=%d J=%d\n",m,n);
        }
    }
    }

return 0;
}

