#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int s, a;
	scanf("%d %d", &s, &a);
	s /= 2;
	a /= 2;
	if (s > a) printf("%d", a);
	else printf("%d", s);
	return 0;
}