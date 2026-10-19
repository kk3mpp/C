#include <stdio.h>
#include <stdlib.h>

int read_dimension(char dim) {
    int value;

    printf("Enter a value for %s: ", dim);
    scanf("%d", &value);

    return value;
}

int dim_allocation(int** Arr, int col_size, int row_size) {
    int l;
    Arr = (int**)malloc(row_size * sizeof(int));
    for (l = 0; l < row_size; l++) {
        Arr[l] = (int*)malloc(col_size * sizeof(int));
    }

    return Arr;
}

int main(void) {
    int i, j, k;
    int m = read_dimension("M");
    int n = read_dimension("N");
    int o = read_dimension("O");
    int **A, **B, **C;
    A = dim_allocation(A, m, n);
    B = dim_allocation(B, o, m);
    C = dim_allocation(C, );
    return 0;
}