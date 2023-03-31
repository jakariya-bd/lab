#include <stdio.h>

int main(void)
{
    int num, i;

    printf("Input a number: ");
    scanf("%d", &num);

    int flag = 1;

    if( num < 2 ) flag = 0;
    else if( num == 2 ) flag = 1;
    else if( num % 2 == 0) flag = 0;
    else{
        for(i = 3; i < num; i += 2){
            if( num % i == 0 ){
                flag = 0;
                break;
            }
        }
    }

    if( flag == 1 ){
        printf("%d is a prime number\n", num);
    }
    else{
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
