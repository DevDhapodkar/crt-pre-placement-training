#include <stdio.h>
int main(){
    int arr[5];
    int i;
    int key;
    int flag = 0;
    int max_size = sizeof(arr)/sizeof(arr[0]);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i=0;i<max_size;i++){
        if(arr[i]==key){
            printf("Element found at index: %d", i);
            flag = 1;
            return 0;
        }
    }
    if(flag == 0){
        printf("Element not found in the array.");
    }
    return 0;
}