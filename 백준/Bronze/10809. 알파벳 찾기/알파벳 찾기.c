#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char s[101];
int main() {
	int i, j;
	int a[26];
	scanf("%s", s);
	for (i = 0; i < 26; i++) {
		a[i] = -1;
		for (j = 0; s[j] != '\0'; j++) {
			if (s[j] == i + 97) {
				a[i] = j;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++)printf("%d ", a[i]);
	return 0;
}