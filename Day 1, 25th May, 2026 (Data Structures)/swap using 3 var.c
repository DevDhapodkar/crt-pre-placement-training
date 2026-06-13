#include<stdio.h>
int main()
{
    int a = 10; 
    int b = 20;
    int temp; // this variable is used to store the value of a or b temporarily while
    // we are swapping the values of a and b
    printf("Before swapping: a = %d , b = %d ",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping: a = %d , b = %d ",a,b);
    return 0;
}