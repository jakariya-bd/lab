#include <stdio.h>

int main()
{
    int a, b, c; // angles
    scanf("%d %d %d", &a, &b, &c);

    if( a+b+c == 180 ){
        printf("The triangle is valid.\n");
    }
    else{
        printf("The triangle is not valid.\n");
    }

    return 0;
}
