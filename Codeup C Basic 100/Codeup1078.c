#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);

	int plus = 0;

	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			plus += i;
		}
	}

	printf("%d", plus);

	return 0;
}
