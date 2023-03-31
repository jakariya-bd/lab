#include <stdio.h>

int main(void)
{
    long long int n, i, x, sum;

    printf("Input the number of terms: ");
    scanf("%lld", &n);

    sum = x = 0;

    for(i = 1; i <= n; ++i){
        x = (10*x) + 1;
        sum += x;
    }

    printf("The sum is %lld\n", sum);

    return 0;
}
