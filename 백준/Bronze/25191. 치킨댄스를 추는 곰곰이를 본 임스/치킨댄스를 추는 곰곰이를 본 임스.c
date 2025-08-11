#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, a, b, c;
	scanf("%d %d %d", &n, &a, &b);
	a /= 2;
	c = a + b;
	printf("%d", (c > n) ? n : c);
	return 0;
}