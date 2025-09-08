#include <stdio.h>

int main() {
    int n = 4; // Size of the matrix (4x4)
    int matrix[4][4] = {0};
    int num = 1;
    int i, j, k;

    // Fill the matrix in diagonal zigzag pattern
    for (k = 0; k < 2 * n - 1; k++) {
        if (k % 2 == 0) { // Even diagonals (top-right to bottom-left)
            for (i = (k < n) ? k : n - 1;
                 i >= ((k < n) ? 0 : k - n + 1);
                 i--) {
                j = k - i;
                matrix[i][j] = num++;
            }
        } else { // Odd diagonals (bottom-left to top-right)
            for (j = (k < n) ? 0 : k - n + 1;
                 j <= ((k < n) ? k : n - 1);
                 j++) {
                i = k - j;
                matrix[i][j] = num++;
            }
        }
    }

    // Print the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            if (j < n - 1) {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}