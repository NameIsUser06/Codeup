#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	
	int b = 1;
	int plus = 0;

	while (1) {
		if (plus >= a) {
			printf("%d", b - 1);
			break;
		}
		else {
			plus += b;
			b++;
		}
	}

	return 0;
}
