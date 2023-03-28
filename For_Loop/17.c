#include <stdio.h>

int main(void)
{
    int n, i, k, sum;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are :");

    sum = 0;
    i = 1, k = 1;

    while( i <= n ){

        printf(" %d", k);
        sum += k;

        ++ i;
        k += 2;
    }

    printf("\nThe sum of odd natural numbers upto %d terms : %d\n", n, sum );

    return 0;
}
