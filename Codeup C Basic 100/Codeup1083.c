#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);

	int b = 1;

	while (1) {
		if (a == b) {
			if (b % 3 == 0) {
				printf("X ");
				break;
			}
			else {
				printf("%d ", b);
				break;
			}
		}

		if (b % 3 == 0) printf("X ");
		else printf("%d ", b);
		b++;

	}

	return 0;
}
