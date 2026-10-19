#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, n, total;
    int* p;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    p = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        *(p + i) = i + 1;
    }

    total = 0;

    for (i = 0; i < n; i++) {
        total += *(p + i);
    }

    printf("Sum: %d", total);

    free(p);
    return 0;
}