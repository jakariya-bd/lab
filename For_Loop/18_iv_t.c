#include <stdio.h>

int main(void)
{
    int i, k, a, n;

    scanf("%d", &n);

    a = 1;
    for(i = 1; a <= n; ++i){
        for(k=1; k <= i && a <= n; ++k){
            printf("%d ", a);
            a ++ ;
        }
        printf("\n");
    }

    return 0;
}

