#include <stdio.h>

int main(void)
{
    int n, wn, L, R;
    int flag;

    printf("Input a number: ");
    scanf("%d", &n);

    L = 1;
    wn = n;
    while( wn > 0 ){
        L *= 10;
        wn /= 10;
    }
    L /= 10;

    wn = n;

    R = 10;
    flag = 1;

    while( wn > 0 ){
        if( wn / L != wn % R ){

            flag = 0;
            break;
        }

        wn = wn % L;
        wn /= 10;

        L /= 100;
    }

    if( flag == 1 ){
        printf("%d is a palindromic number\n", n);
    }
    else{
        printf("%d is NOT a palindromic number\n", n);
    }

    return 0;
}
