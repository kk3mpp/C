#include <stdio.h>

int main(void) {
    int i, j, k;
    int A[3][2] = {2, 4, 5, 3, 0, 1};
    int B[2][3] = {2, 7, 0, 3, 1, 4};
    int C[2][2] = {0, 0, 0, 0};
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                C[j][i] += A[k][i] * B[j][k];
            }
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[j][i]);
        }
        printf("\n");
    }
}