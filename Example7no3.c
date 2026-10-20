#include <stdio.h>
#include <stdlib.h>

int read_dimension(char dim) {
    int value;

    printf("Enter a value for %c: ", dim);
    scanf("%d", &value);

    return value;
}

int** dim_allocation(int row_size, int col_size) {
    int** Arr = (int**)malloc(row_size * sizeof(int*));

    for (int l = 0; l < row_size; l++) {
        Arr[l] = (int*)malloc(col_size * sizeof(int));
    }

    return Arr;
}

void read_arrays(int rows, int cols, int** Arr) {
    printf("Enter %d numbers separated by spaces: \n", rows * cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &Arr[i][j]);
        }
    }
}

int main(void) {
    int i, j, k;
    int m = read_dimension('M');
    int n = read_dimension('N');
    int o = read_dimension('O');
    int **A, **B, **C;

    A = dim_allocation(m, n);
    B = dim_allocation(o, m);
    C = dim_allocation(n, o);

    for (i = 0; i < n; i++) {
        for (j = 0; j < o; j++) {
            C[i][j] = 0;
        }
    }

    read_arrays(m, n, A);
    read_arrays(o, m, B);

    for (i = 0; i < n; i++) {
        for (j = 0; j < o; j++) {
            for (k = 0; k < m; k++) {
                C[j][i] += A[k][i] * B[j][k];
            }
        }
    }

    printf("\nResult Matrix:\n");

    for (i = 0; i < o; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[j][i]);
        }
        printf("\n");
    }

    return 0;
}