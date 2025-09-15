#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int w, a, r;
	scanf("%d", &w);
	a = w * 2;
	r = sqrt(a) * 4;
	printf("%d", r);
	return 0;
}