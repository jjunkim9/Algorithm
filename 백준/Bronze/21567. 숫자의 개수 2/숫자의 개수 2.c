#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10] = { 0 };
	long long int a, b, c, n, i;
	long long int d;
	scanf("%lld %lld %lld", &a, &b, &c);
	d = a * b * c;
	while (d > 0) {
		n = d % 10;
		arr[n]++;
		d /= 10;
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}