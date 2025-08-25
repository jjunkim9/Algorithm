#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int f, s, t;
	scanf("%d %d", &t, &s);
	f = s + (s - t);
	printf("%d", f);
	return 0;
}