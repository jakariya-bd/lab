#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double check_part, m, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    check_part = b*b - 4.0*a*c;

    if( check_part < 0.0 ){
        printf("Roots are imaginary;\nNo solution.\n");
    }
    else{
        m = sqrt( check_part );

        x1 = ( -b + m ) / (2.0 * a);
        x2 = ( -b - m ) / (2.0 * a);

        printf("x1 = %lf\nx2 = %lf\n", x1, x2);
    }

    return 0;
}
