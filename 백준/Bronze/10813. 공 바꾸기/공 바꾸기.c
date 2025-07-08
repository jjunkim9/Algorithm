#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, a, b;
	int i, j, temp;
	int arr[100] = {0};
	scanf("%d %d", &n, &m);
	for (a = 1; a <= n; a++) {
		arr[a] = a;
	}
	for ( a = 0; a < m; a++) {
		scanf("%d %d", &i, &j);
		temp = arr[i];
		arr[i] = arr[j];;
		arr[j] = temp;
	}
	for (a = 1; a <= n; a++) {
		printf("%d ", arr[a]);
	}
	return 0;
}