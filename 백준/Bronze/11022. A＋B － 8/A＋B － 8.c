#include <stdio.h>
int main() {
	int A, B, T, s, c = 1;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		s = A + B;
		printf("Case #%d: %d + %d = %d\n", c++, A, B, s);
	}
	return 0;
}