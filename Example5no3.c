#include <stdio.h>

int main(void) {
    int Bikkuri, N, k;
    printf("Input N: \n");
    scanf("%d", &N);
    for (Bikkuri = 1, k = 2; k <= N; k++)
        Bikkuri = Bikkuri * k;
    printf("Bikkuri Calculated: %d", Bikkuri);
    return 0;
}