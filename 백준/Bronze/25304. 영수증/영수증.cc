#include <stdio.h>

int main() {
	int X, N, n = 1;
	int a, b, result = 0;
	scanf("%d", &X);
	scanf("%d", &N);
	while (n <= N) {
		a = 0;
		b = 0;
		scanf("%d%d", &a, &b);
		result = result + (a * b);
		n = n + 1;
	}
	if (result == X) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}