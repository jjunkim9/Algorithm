#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[42] = { 0 };
	int i, j, a, n, cnt = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a);
		n = a % 42;
		arr[n] = 1;
	}
	for (i = 0; i < 42; i++) {
		if (arr[i] != 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}