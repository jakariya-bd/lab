#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d", &m);

    if( m > 0 ){
        n = 1;
    }
    else if( m == 0 ){
        n = 0;
    }
    else{ // then m < 0 must be true
        n = -1;
    }

    printf("The value of n = %d\n", n);

    return 0;
}

