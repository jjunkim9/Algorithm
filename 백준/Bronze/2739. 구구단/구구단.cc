#include <stdio.h>

int main() {
    int A, R;
    int t = 1;
    scanf("%d", &A);

    while (t < 10) {
        R = A * t;
        printf("%d * %d = %d\n", A, t, R);
        t = t + 1;
    }

    return 0;

}