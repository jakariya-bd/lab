#include <stdio.h>

int main(void)
{
    int n, i, k;
    char c = 'A';

    n = 3;

    for(i = 1; i <= n; ++i){

        for(k = i; k <= n; ++k) printf(" ");

        for(k = 1; k <= i; ++k) printf("%c ", c + k - 1);
        for(k = i-1; k >= 1; --k) printf("%c ", c + k - 1);

        printf("\n");
    }

    return 0;
}
