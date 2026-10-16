#include <stdio.h>

int main(void) {
    int i, sum;
    for (i = 1; i <= 100; i++) {
        if ((i % 3) == 0 || (i % 7) == 0) {
            printf("Dividable Number Found: %d\n", i);
            sum += i;
        }
    }
    printf("Dividable Sum: %d\n", sum);
    return 0;
}