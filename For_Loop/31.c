// Working formula
// n_c_r = n! / ( (n-r)! r! )
// here n is (n+1)th row and r is the (r+1)th entry of that row

#include <stdio.h>

int main(void)
{
    int row, i, j, k, n, f_n, f_n_minus_r, f_r, entry;

    printf("Input the number of rows: ");
    scanf("%d", &row);

    for(i = 0; i < row; ++i){

        for(k = i; k < row; ++k) printf(" ");

        n = i ;

        // finding n!
        f_n = 1;
        for(k = 1; k <= n; ++k) f_n *= k;

        for(j = 0; j <= n; ++j){ // every r is every j here

            // finding (n-r)!
            f_n_minus_r = 1;
            for(k = 1; k <= n-j; ++k) f_n_minus_r *= k;

            // finding r!
            f_r = 1;
            for(k = 1; k <= j; ++k) f_r *= k;

            entry = f_n / (f_n_minus_r * f_r ); // n! / ( (n-r)! r! )

            printf("%d ", entry);
        }
        printf("\n");
    }

    return 0;
}
