// Armstrong number : Sum of all cubes of digits of a number equaling to that number is called an Armstrong number.
// For example - 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

#include <stdio.h>

int main(void)
{
    int L, R, i;
    int num, sum, digit;

    printf("Input starting number of range: ");
    scanf("%d", &L);

    printf("Input ending number of range: ");
    scanf(" %d", &R);

    printf("Armstrong numbers in the given ranges are:");
    for(i = L; i <= R; ++i){
        num = i;
        sum = 0;

        while( num > 0 ){
            digit = num % 10;

            sum += digit * digit * digit; // digit^3

            num /= 10;
        }

        if( sum == i ){
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}

