/*_______ PROGRAM USING COSINE FUNCTION _____*/
#include <stdio.h>
#include <math.h>

#define PI  3.1416
#define MAX 180

main()
{
    int angle;
    float x,y;
    angle = 0;
    printf("    Angle     Cos(angle)\n\n");
    while( angle <= MAX ){
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%8d %13.4f\n", angle, y);
        angle = angle + 10;
    }
}
