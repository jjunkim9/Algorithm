#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac(int n) {
	if (n == 0) return 1;
	return n * fac(n - 1);
}
int main() {
	int N;
	scanf("%d", &N);
	printf("%d", fac(N));
	return 0;
}