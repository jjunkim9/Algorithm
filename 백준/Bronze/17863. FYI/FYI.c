#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n[7], i;
	for (i = 0; i < 7; i++) scanf("%1d", &n[i]);
	if (n[0] == 5 && n[1] == 5 && n[2] == 5)printf("YES");
	else printf("NO");
	return 0;
}