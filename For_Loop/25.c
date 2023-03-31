#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int n, i, f;
    double x, sum;

    printf("Input the value of x : ");
    scanf("%lf", &x);

    printf("Input the number of terms : ");
    scanf(" %d", &n);

    sum = 0.0;
    f = 1;

    for(i = 0; i < n; ++i){

        f = (i>0 ? f*i : 1);

        sum += pow(x, i) / f ;
    }

    printf("The sum is %lf\n", sum);

    return 0;
}
