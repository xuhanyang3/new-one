#include<stdio.h>
#include<stdlib.h>
int main() {
	int N, i, a;
	scanf_s("%d", &N);
	if (N > 0 && N <= 2147483647) {
		for (i = 2; i <= N; i++) {
			for (a = 2; a <= i; a++) {
				if (i % a == 0) break;
			}
			if (a >= i) printf("%d", i);
		}
	}
	else printf("error");
	return 0;
}