#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, i, v;
	int cnt = 0;
	int arr[100];
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);
	for (i = 0; i < N; i++) {
		if (arr[i] == v) cnt++;
	}
	printf("%d", cnt);
	return 0;
}