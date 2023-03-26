#include <stdio.h>

int main(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2 );

    if( num1 == num2 ){
        printf("Number1 and Number2 are equal.\n");
    }
    else{
        printf("Number1 and Number2 are NOT equal.\n");
    }

    return 0;
}
