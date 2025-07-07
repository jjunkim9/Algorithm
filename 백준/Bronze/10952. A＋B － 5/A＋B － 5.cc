#include <stdio.h>
int main() {
	int A = 1, B = 1, s;
	while (A + B > 0) {
		scanf("%d %d", &A, &B);
		s = A + B;
		if (s == 0) {
			return 0;
		}
		printf("%d\n", s);
	}
}