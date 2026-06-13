#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;

    printf("value of b is %f \n", b);
    printf("value of a is %d \n", a);

    printf("address of a is %p \n", &a);
    printf("address of b is %p \n", &b);

    int *ptr = &a;
    float *ptr2 = &b;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    int ****pppptr = &ppptr;
    int *****ppppptr = &pppptr;
    int ******pppppptr = &ppppptr;
    printf("value of ptr is %p \n", ptr);
    printf("Value of a using pointer is %d \n", *ptr);
    printf("value of ptr2 is %p \n", ptr2);
    printf("Value of b using pointer is %f \n", *ptr2);

}
