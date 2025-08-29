#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c, d, e, f, sum;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	sum = a + b + c + d + e + f;
	printf("%d", sum * 5);
	return 0;
}