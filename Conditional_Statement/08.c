#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("The coordinate point (%d,%d) lies in the ", x, y);

    if( x > 0 ){
        if( y > 0 ) printf("First quadrant.\n");
        else if( y < 0 ) printf("Fourth quadrant.\n");
    }
    else if( x < 0 ){
        if( y > 0 ) printf("Second quadrant.\n");
        else if( y < 0 ) printf("Third quadrant.\n");
    }

    if( x == 0 || y == 0 ){
        printf("middle of two quadrants.\n");
    }

    return 0;
}
