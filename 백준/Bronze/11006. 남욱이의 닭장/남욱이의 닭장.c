#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, i;
	long long int N, M, U, T;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%lld %lld", &N, &M);
		U = M * 2 - N;
		T = M - U;
		printf("%d %d\n", U, T);
	}
	return 0;
}