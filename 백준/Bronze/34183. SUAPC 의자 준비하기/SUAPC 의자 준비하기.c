#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, a, b;
	scanf("%d %d %d %d", &n, &m, &a, &b);
	if (n * 3 <= m) printf("0");
	else {
		long long int sum = (n * 3 - m) * a + b;
		printf("%lld", sum);
	}
	return 0;
}