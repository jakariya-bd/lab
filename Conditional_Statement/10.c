#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if( a+b < c || a+c < b || c+b < a){
        printf("This is not a triangle at all.\n");
    }
    else if( a == b && b == c ){
        printf("This is an equilateral triangle.\n");
    }
    else if( a == b || b == c || a == c ){
        printf("This is an isosceles triangle.\n");
    }
    else{
        printf("This is a scalene triangle.\n");
    }

    return 0;
}
