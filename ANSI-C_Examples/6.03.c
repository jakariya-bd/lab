#include <stdio.h>
main()
{
    int A, B, C, X;
    printf("Enter three values\n");
    scanf("%d %d %d", &A, &B, &C);
    printf("\nLargest value is ");

    if( A > B ){
        if( A > C ) X = A;
        else X = C;
    }
    else if( B > C ) X = B;
    else X = C;

    printf("%d\n", X);

}
