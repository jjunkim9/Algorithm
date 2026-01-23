#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, i;
	char s[11];
	scanf("%d", &n);
	scanf("%s", s);
	for (i = 0; i < n; i++) {
		if (s[i] == 'g') {
			if (s[i + 1] == 'o' && s[i + 2] == 'r' && s[i + 3] == 'i') {
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}