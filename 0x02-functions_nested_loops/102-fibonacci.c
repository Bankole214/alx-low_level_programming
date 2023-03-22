#include <stdio.h>

int main() {
    int n = 50;
    int sequence[n];
    sequence[0] = 1;
    sequence[1] = 2;
    for (int i = 2; i < n; i++) {
        sequence[i] = sequence[i-1] + sequence[i-2];
    }
    for (int i = 0; i < n; i++) {
        printf("%d", sequence[i]);
        if (i < n-1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
