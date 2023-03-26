#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if( n > 0 ){
        printf("%d is a positive integer.\n", n);
    }
    else if( n < 0 ){
        printf("%d is a negative integer.\n", n);
    }
    else{
        printf("%d is neither a positive nor a negative integer.\n", n);
    }

    return 0;
}
