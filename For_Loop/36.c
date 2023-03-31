#include <stdio.h>

int main(void)
{
    int a, b, x, y, gcd, lcm, t;

    printf("Input 1st number for LCM: ");
    scanf("%d", &a);

    printf("Input 2nd number for LCM: ");
    scanf("%d", &b);

    x = a, y = b;

    while( x % y != 0 ){
        t = x % y;
        x = y;
        y = t;
    }
    gcd = y;

    lcm = a*b / gcd; // we know that, lcm of a and b equals to the product of them divided by gcd of a and b

    printf("The LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
