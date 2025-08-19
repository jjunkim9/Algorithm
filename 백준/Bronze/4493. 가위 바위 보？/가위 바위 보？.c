#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int t, n, aw, bw, i, j;
	char a, b;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		aw = 0;
		bw = 0;
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf(" %c %c", &a, &b); //공백 인식 주의
			switch (a) {
			case 'R':
				if (b == 'S') aw++;
				if (b == 'P') bw++;
				break;
			case 'S':
				if (b == 'R') bw++;
				if (b == 'P') aw++;
				break;
			case 'P':
				if (b == 'R') aw++;
				if (b == 'S') bw++;
			}
		}
		if (aw == bw) printf("TIE\n");
		else printf("Player %d\n", (aw > bw) ? 1 : 2);
	}
	return 0;
}