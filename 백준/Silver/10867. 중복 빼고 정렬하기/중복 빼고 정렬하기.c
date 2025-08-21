#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, a, j = 0;
	int arr[2001] = {0}; //음수값이 등장할 가능성으로 인해 범위를 2001로 선언
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		arr[a + 1000] = 1; //음수값이 나올 경우 +1000을 해 임시로 양수 처리
	}
	for (i = 0; i <= 2000; i++) {
		if (arr[i]) {
			printf("%d ", i - 1000); //양수 처리한 음수를 다시 음수 처리
		}
	}
	return 0;
}