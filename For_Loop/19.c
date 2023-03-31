#include <stdio.h>

int main(void)
{
    int height, i, k, x;

    height = 4;
    x = 1;
    for(i = 1; i <= height; ++i){
        for(k = i; k < height; ++k){
            printf(" ");
        }
        for(k = 1; k <= i; ++k){
            printf("%d ", x);
            x ++ ;
        }
        printf("\n");
    }

    return 0;
}
