#include <stdio.h>

int main(void)
{
    int i;
    double num, sum;

    sum = 0;
    
    for(i = 1; i <= 10; ++i){
        printf("Number-%d : ", i);
        scanf("%lf", &num);

        sum += num;
    }

    printf("The sum of 10 numbers is %lf\n", sum);
    printf("The average is %lf\n", sum/10.0 );

    return 0;
}
