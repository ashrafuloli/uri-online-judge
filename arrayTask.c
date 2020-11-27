#include <stdio.h>
int main()
{
    int arr[100]={0};
	int spy[100]={0};
    int length = sizeof(arr) / 4;
    int position[50];
    int positionlength = sizeof(arr) / 4;
    int positionSize = 0;
    int indexNumber;
    int value;
   

    while (1) // no breakcondition
    {
        //index form user
        printf("enter the index number : ");
        scanf("%d", &indexNumber);
        //no validation break
        if (indexNumber < 0)
        {
            printf("Breaking loop\n");
            break;
        }

        if (indexNumber >= 100)
        {
            printf("array index out of bount\n");
            continue;
        }
        //value from user
        printf("enter value : ");
        scanf("%d", &value);


		// task

		if(spy[indexNumber]==0)
		{
		    arr[indexNumber] = value;
		    position[positionSize] = indexNumber;
            positionSize++;

		    spy[indexNumber] = 1;
		    
		}

		else
		{
			arr[indexNumber] = value;
		}
        
        // task


    }
    
    for (int i = 0; i < positionSize; i++)
    {
		printf("position %d ---> index [%d] ---> value %d\n", i,position[i], arr[position[i]]);
    }
}