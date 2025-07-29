#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int C, i, min, max;
	int A[50];
	scanf("%d", &C);
	for (i = 0; i < C; i++) scanf("%d", &A[i]);
	min = A[0];
	max = A[0];
	for (i = 0; i < C; i++) {
		if (A[i] < min)min = A[i];
		if (A[i] > max)max = A[i];
	}
	printf("%d", min*max);
	return 0;
}