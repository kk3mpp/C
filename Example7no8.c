#include <stdio.h>

// Caution: A is 2 * s, not s * 2!

int main(void) {
    int i, s;
    int* A[2];
    int dep_num;

    printf("Enter the size of CH: ");
    scanf("%d", &s);
    A[2] = (int*)malloc(s * sizeof(int));
    for (i = 0; i < s; i++) {
        A[1][i] = i + 1;
    }

    printf("Enter %d values for CH: ", s);

    for (i = 0; i < s; i++) {
        scanf("%d", &A[2][i]);
    }

    if (A[2][i] == dep_num) {
    }

    return 0;
}