#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char arr[101];
	int flag = 1;
	scanf("%s", arr);
	for (int i = 1; i < strlen(arr) - i / 2; i++) {
		if (arr[i - 1] != arr[strlen(arr) - i]) flag = 0;
	}
	printf("%d", flag);
	return 0;
}