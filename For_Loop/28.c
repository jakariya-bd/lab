#include <stdio.h>

int main(void)
{
    int n, m, i, k;

    n = 5;

    for(i=1; i <= n; ++i){
        for(k=i; k < n; ++k) printf(" ");
        m = 2*i - 1;
        for(k=1; k <= m; ++k) printf("*");
        printf("\n");
    }

    for(i=n-1; i >= 1; --i){
        for(k=i; k < n; ++k) printf(" ");
        m = 2*i - 1;
        for(k=1; k <= m; ++k) printf("*");
        printf("\n");
    }

    return 0;
}
