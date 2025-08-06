#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c[256];
	int i, h = 0, s = 0;
	fgets(c, sizeof(c), stdin);
	for (i = 0; c[i] != '\0' && c[i + 1] != '\0'; i++) {
		if (c[i] == ':' && c[i + 1] == '-') {
			if (c[i + 2] == ')')h++;
			if (c[i + 2] == '(')s++;
		}
	}
	if (h == 0 && s == 0) printf("none");
	else if (h == s)printf("unsure");
	else if (h > s)printf("happy");
	else printf("sad");
	return 0;
}