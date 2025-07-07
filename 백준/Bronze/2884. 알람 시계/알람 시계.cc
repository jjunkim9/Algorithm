#include <stdio.h>

int main() {

    int hour = 0, min = 0;

    int result_h = 0, result_m = 0;

    scanf("%d %d", &hour, &min);

    result_m = min - 45;
    result_h = hour;

    if (result_m < 0) {

        result_m = result_m + 60;

        result_h = hour - 1;

        if (result_h < 0) {

            result_h = result_h + 24;

        }

    }

    printf("%d %d", result_h, result_m);

    return 0;

}