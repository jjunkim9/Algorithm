#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, X, a, i, cnt = 0;
	int A[10000];
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a < X) A[cnt++] = a;
	}
	for (i = 0; i < cnt; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}