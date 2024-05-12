#include <stdio.h>

double determinant(double mat[3][3])
{
    int i;
    double det = 0.0;
    double a,b,c,d;

    for(i = 0; i < 3; ++i){

        a = mat[1][ (i+1) % 3 ];
        b = mat[2][ (i+2) % 3 ];

        c = mat[1][ (i+2) % 3 ];
        d = mat[2][ (i+1) % 3 ];

        det += mat[0][i] * ( a*b - c*d );
    }
    return det;
}

int main()
{
    double mat[3][3], det;
    int i,k;

    printf("Enter the elements of 3x3 matrix:\n");
    for(i=0; i < 3; ++i){
        for(k=0; k < 3; ++k){
            scanf(" %lf", &mat[i][k] );
        }
    }

    det = determinant(mat);
    printf("Determinant: %0.2lf\n", det);

    return 0;
}
