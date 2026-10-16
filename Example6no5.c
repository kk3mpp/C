#include <limits.h>
#include <stdio.h>

int main(void) {
    int scoresBefore[10] = {45, 48, 51, 69, 71, 74, 83, 91, 94, 98};
    int scoresAfter[10];
    int n = sizeof(scoresBefore);
    int k, i, minOrd, minNow;
    for (k = 0; k < n; k++) {
        minNow = INT_MAX;
        for (i = 0; i < n; i++) {
            if (scoresBefore[i] < minNow) {
                minNow = scoresBefore[i];
                minOrd = i;
            }
        }
        scoresAfter[k] = minNow;
        scoresBefore[minOrd] = INT_MAX;
    }
}