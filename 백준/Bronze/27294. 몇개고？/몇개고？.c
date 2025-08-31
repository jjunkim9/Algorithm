#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, s;
	scanf("%d %d", &t, &s);
	if (s == 0 && t >= 12 && t <= 16)printf("320");
	else printf("280");
	return 0;
}