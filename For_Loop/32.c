#include <stdio.h>

int main(void)
{
    int n, i, a, b, c;

    printf("Input the number of terms to display: ");
    scanf("%d", &n);

    a = 0;
    b = 1;
    c = 0;

    for(i=1; i <= n; ++i){
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
