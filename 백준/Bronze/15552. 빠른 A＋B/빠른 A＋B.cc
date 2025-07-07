#include <stdio.h>
int main() {
	int A, B, T, s;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		s = A + B;
		printf("%d\n", s);
	}
	return 0;
}