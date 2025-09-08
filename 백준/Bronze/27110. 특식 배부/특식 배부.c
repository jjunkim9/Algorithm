#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, i, n, sum = 0;;
	scanf("%d", &n);
	for (i = 0; i < 3; i++) {
		scanf("%d", &a);
		if (a < n) sum += a;
		else sum += n;
	}
	printf("%d", sum);
	return 0;
}