#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[1001];
void dp(int n) {
	m[1] = 1;
	m[2] = 2;
	for (int i = 3; i <= n; i++) {
		m[i] = (m[i - 1] + m[i - 2])%10007;
	}
	printf("%d", m[n]);
}
int main() {
	int n;
	scanf("%d", &n);
	dp(n);
	return 0;
}