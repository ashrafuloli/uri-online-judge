  
#include<stdio.h>

main()
{
	int i, pos = 0;
	float n, sum = 0, avarage;
	
	for(i = 1; i <= 6; i++){
		scanf("%f",&n);
	
		if(n>0){
			sum += n;
		    pos += 1;
		}
	}
	avarage = sum/pos;
	printf("%d valores positivos\n",pos);
	printf("%.1f\n",avarage);
	
   return 0;	
}