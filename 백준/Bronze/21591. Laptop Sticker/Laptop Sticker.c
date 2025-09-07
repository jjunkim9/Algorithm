#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int wc, hc, ws, hs;
	scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
	if (wc - ws >= 2 && hc - hs >= 2)printf("1");
	else printf("0");
	return 0;
}