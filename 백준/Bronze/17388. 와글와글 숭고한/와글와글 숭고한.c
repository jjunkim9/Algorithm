#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int s, k, h;
	scanf("%d %d %d", &s, &k, &h);
	if (s + k + h >= 100)printf("OK");
	else {
		if (s < k && s < h)printf("Soongsil");
		else if (k < s && k < h)printf("Korea");
		else printf("Hanyang");
	}
	return 0;
}