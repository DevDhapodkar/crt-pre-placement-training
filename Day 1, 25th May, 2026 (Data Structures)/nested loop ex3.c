#include <stdio.h>
// to print 123
//456
//789
int main(){
    int i, j, k = 1;
    for (i = 1; i <= 3; i++){
        for (j = 1; j <= 3; j++){
            printf("%d ", k);
            k++;
        }   
        printf("\n");

}
}