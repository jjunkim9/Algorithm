#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, f, s;
	scanf("%d", &n);
	f = n * 0.78;
	s = n * 0.956;
	printf("%d %d", f, s);
	return 0;
}