#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int A[100][100], B[100][100], R[100][100];
int main() {
	int N, M, i, j;
	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			scanf("%d", &B[i][j]);
			R[i][j] = A[i][j] + B[i][j];
		}
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			printf("%d ", R[i][j]);
		}
		printf("\n");
	}
	return 0;
}