#include <stdio.h>

int bin_search(int A[], int N, int target){
    int left = 0, right = N-1;
    int found = -1;

    while( left <= right ){
        int mid = (left + right) / 2;
        if( A[mid] == target ){
            found = mid;
            break;
        }
        else if( target > A[mid] ){
            left = mid + 1;
        }
        else if( target < A[mid] ){
            right = mid - 1;
        }
    }

    return found;
}

int main()
{
    int A[] = { 1, 2 ,3 ,4, 5, 7};
    int N = 6;

    int target;
    scanf("%d", &target);

    printf("%d \n", bin_search(A, N, target) );
    return 0;
}
