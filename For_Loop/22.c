#include <stdio.h>

int main(void)
{
    int n, i;
    double sum, x;

    printf("Input the number of terms : ");
    scanf("%d", &n);

    sum = 0.0;
    for(i=1; i <= n; ++i){
        x = i;
        sum += (1.0/x);
    }

    printf("Sum of Series upto %d terms: %lf\n", n, sum);

    return 0;
}
