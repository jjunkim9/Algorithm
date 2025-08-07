#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long long int sum = 0;
	int n, i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		sum += n * n;
	}
	printf("%d", sum % 10);
	return 0;
}