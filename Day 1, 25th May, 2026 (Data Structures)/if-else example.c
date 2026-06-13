#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("a is greater than b");
    }
    else if(a < b){
        printf("a is less than b");

}}
