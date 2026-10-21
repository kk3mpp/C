#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, s;
    int** A;
    int dep_num;
    int cycle_num = 0;

    printf("Enter the size of CH: ");
    scanf("%d", &s);

    A = (int**)malloc(2 * sizeof(int));

    for (i = 0; i < 2; i++) {
        A[i] = (int*)malloc(s * sizeof(int));
    }

    for (i = 0; i < s; i++) {
        A[1][i] = i + 1;
    }

    printf("Enter %d values for CH: ", s);
    for (i = 0; i < s; i++) {
        scanf("%d", &A[1][i]);
    }

    dep_num = INT_MAX;

    printf("Cycle Decomposition: ");

    printf("( ");
    for (i = 0; i != dep_num - 1;) {
        if (i == 0) {
            printf("%d ", i + 1);
            dep_num = 1;
        }
        if (A[1][i] != dep_num) {
            printf("%d ", A[1][i]);
        }
        i = A[1][i] - 1;
    }
    printf(") ");
    cycle_num += 1;

    printf("\nCycle: %d", cycle_num);
    return 0;
}