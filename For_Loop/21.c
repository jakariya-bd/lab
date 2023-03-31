#include <stdio.h>

int main(void)
{
    int n, i, f;

    printf("Input the number: ");
    scanf("%d", &n);

    for(f = 1, i = 1; i <= n; ++i){
        f *= i;
    }

    printf("The factorial of %d is %d\n", n, f);

    return 0;
}
