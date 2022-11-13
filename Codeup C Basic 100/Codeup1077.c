#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);

	int b = 0;

	while (1) {
		if (a == b) {
			printf("%d\n", b);
			break;
		}
		else {
			printf("%d\n", b);
			b++;
		}
	}

	return 0;
}
