#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char agent[6][11];
	int i, j, cnt[6] = { 0 }, flag = 0;
	for (i = 1; i < 6; i++) {
		scanf("%s", agent[i]);
		for (j = 0; agent[i][j] != '\0'; j++) {
			if (agent[i][j] == 'F' && agent[i][j + 1] == 'B'
				&& agent[i][j + 2] == 'I') cnt[i]++;
		}
	}
	for (i = 1; i < 6; i++) {
		if (cnt[i] > 0) {
			printf("%d ", i);
			flag++;
		}
	}
	if (flag == 0) printf("HE GOT AWAY!");
	return 0;
}