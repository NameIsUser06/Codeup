#include <stdio.h>

int main() {

	int n, a;

	scanf("%d", &n);

	while (1) {
		scanf("%d", &a);
		printf("%d\n", a);
		n--;
		if (n == 0) break;
	}

	return 0;
}
