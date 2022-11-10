#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	while (1) {
		printf("%d\n", n);
		n--;
		if (n == 0) break;
	}

	return 0;
}
