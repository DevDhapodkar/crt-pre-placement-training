#include <stdio.h>
int main(){
    int arr[5];
    int i;
    int greatest;
    int second_greatest;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    greatest=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }
    }
    second_greatest=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>second_greatest && arr[i]<greatest){
            second_greatest=arr[i];
        }
    }
    printf("Second greatest element in the array is: %d", second_greatest);
    return 0;
}
