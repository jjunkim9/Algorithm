#include <stdio.h>

int main() {
    
    int hour = 0, min = 0, need_m = 0;

    int result_h = 0, result_m = 0;

    scanf("%d %d\n%d", &hour, &min, &need_m);

    result_m = min + need_m;
    result_h = hour;

    if (result_m > 59) {

        result_h = result_h + (result_m / 60);
        result_m = result_m % 60;

    }

    if (result_h > 23) {
        result_h = result_h % 24;
    }

    printf("%d %d", result_h, result_m);

    return 0;

}