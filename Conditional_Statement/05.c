#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);

    if( age < 18 ){
        printf("Sorry! You are not eligible for casting your vote.\n");
    }
    else{
        printf("Congratulation! You are eligible for casting your vote.\n");
    }

    return 0;
}
