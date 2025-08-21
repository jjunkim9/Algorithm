#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cnt[10001]; //카운팅 정렬
int main() {
	int n, i, a;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		cnt[a]++;
	}
	for (i = 1; i <= 10000; i++) {
		while (cnt[i]--) { //중복된 수를 모두 출력하기 위해 사용
			printf("%d\n", i);
		}
	}
	return 0;
}