#include<stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b; // a now becomes 30
    b = a - b; // b now becomes 10 (30 - 20)
    a = a - b; // a now becomes 20 (30 - 10)
    printf("After swapping: a = %d, b = %d\n", a, b);   
    
}