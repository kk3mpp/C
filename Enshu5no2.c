#include <stdio.h>

int main(void) {
    int s, m;
    for (s = 1; s <= 9; s++) {
        for (m = 1; m <= 9; m++) {
            if (s * m <= 9)
                printf("%d  ", s * m);
            else
                printf("%d ", s * m);
            if (m == 9) printf("\n");
        }
        m = 1;
    }
}