#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int c1 = 0;
int c2 = 0;
int f[41];

int fiv(int N) {
	if (N == 1 || N == 2) { 
		c1++;
		return 1;
	}
	return fiv(N - 1) + fiv(N - 2);
}

int fivo(N) {
	f[1] = 1;
	f[2] = 2;
	if (N == 1 || N == 2) return 1;
	for (int i = 3; i <= N; i++) {
		f[i] = f[i - 1] + f[i - 2];
		c2++;
	}
	return f[N];
}

int main() {
	int n;
	scanf("%d", &n);
	fiv(n);
	fivo(n);
	printf("%d %d", c1, c2);
	return 0;
}