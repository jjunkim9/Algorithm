#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int w[10000];
int main() {
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &w[i]);
		sum += w[i];
	}
	if (sum % 3 == 0)printf("yes");
	else printf("no");
	return 0;
}