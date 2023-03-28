#include <stdio.h>

int main(void)
{
    int i, k, n;

    scanf("%d", &n);

    for(i=1; i <= n; ++i){
        for(k=1; k <= i; ++k){
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
