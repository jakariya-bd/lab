/*
 1  2  3
 4  5  6
 7  8  9
00 01 02
10 11 12
20 21 22
*/

#include <stdio.h>

float determinant(float matrix[3][3]) {
    float det = 0;

    for (int i = 0; i < 3; i++) {
        det += (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }

    return det;
}

int main() {
    float matrix[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");

    // Input matrix elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculate determinant
    float det = determinant(matrix);

    // Output determinant
    printf("Determinant of the matrix: %.2f\n", det);

    return 0;
}
