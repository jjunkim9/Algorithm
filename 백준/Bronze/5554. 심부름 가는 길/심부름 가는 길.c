#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hs, sp, pa, ah, sum, x, y;
	scanf("%d %d %d %d", &hs, &sp, &pa, &ah);
	sum = hs + sp + pa + ah;
	x = sum / 60;
	y = sum % 60;
	printf("%d\n%d", x, y);
	return 0;
}