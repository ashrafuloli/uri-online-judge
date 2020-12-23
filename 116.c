#include <stdio.h>

int main()
{
        int n, i,x, y;
        float D ;

        scanf("%d", &n);

        for(i = 0; i < n; ++i)
        {
            scanf("%d%d", &x, &y);

            if(y == 0){
                printf("divisao impossivel\n");
            }else
            {
                D = x/(y*1.00);
                printf("%.1f\n", D );
            }
        }

        return 0;
}