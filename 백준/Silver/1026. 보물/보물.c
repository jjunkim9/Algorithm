#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A[100], B[100];
	int N, i, j, sum = 0, temp;
	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &A[i]);
	for (i = 0; i < N; i++) scanf("%d", &B[i]);
	for (i = 0; i < N; i++) {
		for (j = i; j > 0; j--) {
			if (A[j] < A[j - 1]) {
				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
		}
	}
	int max;
	for (i = 0; i < N; i++) {
		max = 0;
		for (j = 0; j < N; j++) {
			if (B[max] < B[j]) max = j;
		}
		sum += A[i] * B[max];
		B[max] = 0;
	}
	printf("%d", sum);
}