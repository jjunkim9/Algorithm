#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i, sum = 0, min = 100;
	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n % 2 != 0) {
			sum += n;
			if (n < min)min = n;
		}
	}
	if (sum == 0) printf("%d", -1);
	else  printf("%d\n%d", sum, min);
	return 0;
}