#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, a, b;
	int i, j, k;
	int arr[100] = {0};
	scanf("%d %d", &n, &m);
	for ( a = 0; a < m; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for ( b = i; b <= j; b++) {
			arr[b] = k;
		}
	}
	for (a = 1; a <= n; a++) {
		printf("%d ", arr[a]);
	}
	return 0;
}