#include <stdio.h>
int main() {
    int n, i, j;
    int matrix[10][10];
    int diagonalSum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   for(i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }
   printf("Sum of diagonal elements = %d\n", diagonalSum);
   return 0;
}