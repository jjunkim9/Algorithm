#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int Set[6] = { 1, 1, 2, 2, 2, 8 };
	int A[6], R[6] = { 0 };
	int i;
	for (i = 0; i < 6; i++) {
		scanf("%d", &A[i]);
		if (A[i] != Set[i]) R[i] = Set[i] - A[i];
	}
	for (i = 0; i < 6; i++) {
		printf("%d ", R[i]);
	}
	return 0;
}