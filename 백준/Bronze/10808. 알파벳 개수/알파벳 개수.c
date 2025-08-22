#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[26] = { 0 };
	int i;
	char c[101];
	scanf("%s", c);
	for (i = 0; c[i] != '\0'; i++) {
		arr[c[i] - 97]++;
	}
	for (i = 0; i < 26; i++) printf("%d ", arr[i]);
	return 0;
}