#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, w = 0;
	char c;
	for (i = 0; i < 6; i++) {
		scanf(" %c", &c);
		if (c == 'W')w++;
	}
	if (w > 4)printf("1");
	else if (w > 2)printf("2");
	else if (w > 0)printf("3");
	else printf("-1");
	return 0;
}