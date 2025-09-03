#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, t;
	long long int n;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%lld", &n);
		printf("%lld\n", n * n);
	}
	return 0;
}