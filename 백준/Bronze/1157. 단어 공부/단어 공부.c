#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char c[1000001];
int main() {
	int a[26] = { 0 };
	int i, max = 0, flag = 0, index = -1;
	scanf("%s", c);
	for (i = 0; c[i] != '\0'; i++) {
		if (c[i] >= 65 && c[i] <= 90) a[c[i] - 65]++;
		else if (c[i] >= 97 && c[i] <= 122) a[c[i] - 97]++;
	}
	for (i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			index = i;
			flag = 0;
		}
		else if (a[i] == max) flag = 1;
	}
	if (flag == 1) printf("?");
	else printf("%c", index + 65);
	return 0;
}