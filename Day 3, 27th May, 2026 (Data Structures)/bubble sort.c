#include <stdio.h>
int main(){
    int arr[10] = { 10, 88, 6,1, 87, 90, 33, 12, 32, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
