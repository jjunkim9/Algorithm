#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, i, a;
	int min = 1000000;
	int max = -1000000;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a < min) min = a;
		if (a > max) max = a;
	}
	printf("%d %d", min, max);
	return 0;
}