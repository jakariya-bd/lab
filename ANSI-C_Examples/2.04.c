/*______ PROGRAM USING FUNCTION ______*/
#include <stdio.h>

int mul(int a, int b); /*_____ DECLARATION ____*/

/*______ MAIN PROGRAM BEGINS _____*/
main()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = mul( a, b );
    printf("multiplication of %d and %d is %d\n", a,b,c);
}
/*______    MAIN PROGRAM ENDS
            MUL() FUNCTION STARTS ______*/
int mul(int x, int y)
{
    int p;
    p = x*y;
    return p;
}
/*_______   MUL() FUNCITON ENDS ______*/
