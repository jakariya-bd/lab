
#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("1st Number = ");
    scanf("%d", &a);

    printf("2nd Number = ");
    scanf("%d", &b);\

    printf("3rd Number = ");
    scanf("%d", &c);

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
