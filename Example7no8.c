#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, s;
    int** A;
    int dep_num;
    int cycle_num = 0;
    int rota_num = 0;

    printf("Enter the size of CH: ");
    scanf("%d", &s);

    A = (int**)malloc(2 * sizeof(int*));

    for (i = 0; i < 2; i++) {
        A[i] = (int*)malloc(s * sizeof(int));
    }

    for (i = 0; i < s; i++) {
        A[0][i] = 0;
    }

    printf("Enter %d values for CH: ", s);
    for (i = 0; i < s; i++) {
        scanf("%d", &A[1][i]);
    }

    printf("Cycle Decomposition: ");

    for (i = 0; i < s; i++) {
        if (A[0][i]) {
            continue;
        }

        int current = i;
        printf("( ");

        while (!A[0][current]) {
            A[0][current] = 1;
            printf("%d ", current + 1);
            current = A[1][current] - 1;
        }

        printf(")");
        cycle_num++;
    }

    printf("\nCycle: %d\n", cycle_num);
    printf("Sgn: %d\n", pow(-1, s - cycle_num));

    return 0;
}