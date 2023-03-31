#include <stdio.h>

int main(void)
{
    int height, i, k;

    height = 4;

    for(i = 1; i <= height; ++i){
        for(k = i; k < height; ++k){
            printf(" ");
        }
        for(k = 1; k <= i; ++k){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
