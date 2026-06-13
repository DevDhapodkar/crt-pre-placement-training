// to print
// 1   3
//   5 
// 7   9
#include <stdio.h>
int main(){
    int i, j, k = 1;
    for (i = 1; i <= 3; i++){
        for (j = 1; j <= 3; j++){
            if (k % 2 != 0){
                printf("%d ", k);
            }
            else{
                printf("  ");
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}
