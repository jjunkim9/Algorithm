#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += n / 5;
			printf("%d", cnt);
			return 0;
		}
		n -= 3;
		cnt++;
	}
	printf("-1");
	return 0;
}