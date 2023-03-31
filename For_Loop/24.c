#include <stdio.h>

int main(void)
{
    int height, i, k, b;

    scanf("%d", &height);

    for(i=1; i <= height; ++i){

        b = i % 2; // he he! :D
        for(k=1; k <= i; ++k){
            printf("%d", b);
            b = !b;
        }
        printf("\n");
    }

    return 0;
}
