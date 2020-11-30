#include <stdio.h>
int main()
{
 
int arr[100]; // to store value
int flag[100]; // to keep track user updates
int index, value;
int len = 100; // total data length
int i;

for (i = 0; i < len; i++) flag[i] = 0;

while(1) {
	printf("enter index: ");
	scanf("%d", &index);
	
	if (index < 0) break;
	else if (index >= len) {
		printf("invalid index");
        continue;
	}
	
	printf("enter value: ");
	scanf("%d", &value);
	
	arr[index] = value;
	flag[index] = 1;

    
}

 for (i = 0; i < len; i++) {
	if (flag[i] == 1)printf("index %d >> value %d\n", i, arr[i]);

}

return 0;
}