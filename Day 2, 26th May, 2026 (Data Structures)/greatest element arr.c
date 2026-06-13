#include <stdio.h>
int main(){
    int arr[5];
    int i;
    int greatest;
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
    printf("Greatest element in the array is: %d", greatest);
    return 0;
}
