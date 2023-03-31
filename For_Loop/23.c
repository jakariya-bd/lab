#include <stdio.h>

int main(void)
{
    int n, i;
    long long int sum, x;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    sum = 0;
    x = 0;

    for(i = 1; i <= n; ++i){
        x = (10*x) + 9;
        sum += x;
    }

    printf("Sum of the series: %lld\n", sum);

    return 0;
}
