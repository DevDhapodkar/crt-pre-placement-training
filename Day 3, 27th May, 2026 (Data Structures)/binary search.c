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

}
