#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[101];
	int N, M;
	int i, j, temp, a, b;
	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++) arr[i] = i;

	for (i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		while (a < b) {
			temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++;
			b--;
		}
	}
	for (i = 1; i <= N; i++) printf("%d ", arr[i]);
	return 0;
}