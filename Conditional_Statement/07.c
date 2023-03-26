#include <stdio.h>

int main(void)
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    printf("1st Number = %d,\t 2nd Number = %d,\t 3rd Number = %d\n", a, b, c);

    if( a > b && a > c ){
        printf("The 1st Number is the greatest among three\n");
    }
    else if( b > c ){ // b >= a
        printf("The 2nd Number is the greatest among three\n");
    }
    else{ // c >= a and c >= b
        printf("The 3rd Number is the greatest among three\n");
    }

    return 0;
}
