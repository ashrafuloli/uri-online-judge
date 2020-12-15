# include <stdio.h>
int main(){
int arr[10];
int value,i;
int size = 0;
int isFounded = 0;
while(1){
    printf("Enter a value\n");
    scanf("%d",&value);
    
    for(i = 0; i<5; i++){
        if(arr[i]==value){
            isFounded = 1;
        }
    }
    if(!isFounded){
        arr[size] = value;
        size++;
    }
    else{
        printf("value already in use\n");
    }
    
    if(size == 5){
        break;
    }
    isFounded = 0;
}
for(int i = 0; i < 5; i++){
    printf("%d\n", arr[i]);
}
    return 0;
}