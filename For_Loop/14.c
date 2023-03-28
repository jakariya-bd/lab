#include <stdio.h>

int main(void)
{
    int i, n, sum;

    scanf("%d", &n);

    printf("The first %d natural numbers are :", n);

    for(sum = 0, i = 1; i <= n; ++i){
        printf(" %d", i);
        sum += i;
    }

    printf("\nThe sum of natural numbers upto %d terms : %d\n", n, sum);

    return 0;
}
