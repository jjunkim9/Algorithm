#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[100001];
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0;; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)break;
	}
	for (i = 0; arr[i] != 0; i++) {
		if (arr[i] % n == 0) printf("%d is a multiple of %d.\n", arr[i], n);
		else printf("%d is NOT a multiple of %d.\n", arr[i], n);
	}
	return 0;
}