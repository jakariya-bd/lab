#include <stdio.h>

int main(void)
{
    int n, rn, i;

    printf("Input a number: ");
    scanf("%d", &n);

    rn = 0;
    while(n > 0 ){
        rn = (10*rn) + n % 10;
        n /= 10;
    }

    printf("The number in reverse order is %d\n", rn);

    return 0;
}
