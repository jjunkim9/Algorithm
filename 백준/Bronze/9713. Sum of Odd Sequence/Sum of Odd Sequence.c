#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, n, i, j, sum;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		sum = 0;
		for (j = 1; j <= n; j++)if (j % 2 != 0)sum += j;
		printf("%d\n", sum);
	}
	return 0;
}