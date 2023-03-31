#include <stdio.h>
#include <math.h>

int main(void)
{
    int L, R, n, i, k, rt;

    printf("Input the starting number of range: ");
    scanf("%d", &L);

    printf("Input the ending number of range: ");
    scanf("%d", &R);

    printf("The prime numbers between %d and %d are :\n", L, R);

    for(i=L; i <= R; ++i){
        if( i == 2 || (i > 2 && i % 2 != 0) ){
            n = i;

            rt = sqrt(n+1);
            for(k=3; k <= rt; k += 2){
                if( n % k == 0 ) break;
            }

            if( k > rt ){
                printf("%d ", n);
            }
        }
    }
    printf("\n");

    return 0;
}
