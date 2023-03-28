#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i;

    printf("Input number of terms : ");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        printf("Number : %d and the cube of %d : %d\n", i, i, i*i*i );
    }

    return 0;
}
