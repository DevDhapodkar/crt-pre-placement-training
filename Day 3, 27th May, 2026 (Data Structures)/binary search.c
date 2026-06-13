#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key){
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[5];
    int mid;
    int low;
    int high;
    int key;
    int max_size = sizeof(arr)/sizeof(arr[0]);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;  
    printf("Enter the element to be searched: ");

}
