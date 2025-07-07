#include <stdio.h>

int main() {
	int N, i, I = 1;
	scanf("%d", &N);
	i = N / 4;
	while (I <= i) {
		printf("long ");
		I = I + 1;
	}
	printf("int");
	return 0;
}