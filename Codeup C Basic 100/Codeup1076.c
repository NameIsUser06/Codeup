#include <stdio.h>

int main() {

	char a;
	scanf("%c", &a);

	int b = 97;

	while (1) {

		if (a == (char)b) {
			printf("%c", b);
			break;
		}
		else {
			printf("%c ", b);
			b++;
		}
	}

	return 0;
}
