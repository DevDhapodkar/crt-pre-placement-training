#include <stdio.h>
 
 int main() {
    int arr[7] = {2, 2, 1, 1, 1, 2, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int candidate;
     for (int i=0 ; i< size ; i++)
    {
        if(count == 0){
            candidate = arr[i];
        }
        if(arr[i] == candidate){
            count++;
        }else{
            count--;
        }
    }
     count = 0;

    for (int i=0 ; i< size ; i++)
    {
        //printf("%d", arr [i]);

}}
