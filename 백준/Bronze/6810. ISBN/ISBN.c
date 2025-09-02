#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + (b * 3) + c + 91;
	printf("The 1-3-sum is %d", sum);
	return 0;
}