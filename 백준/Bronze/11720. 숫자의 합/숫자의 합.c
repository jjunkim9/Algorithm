#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i;
	int sum = 0;
	char c[101] = {0};
	scanf("%d", &n);
	scanf("%s", c);
	for (i = 0; i < n; i++) {
		sum += c[i] - 48;
	}
	printf("%d", sum);
	return 0;
}