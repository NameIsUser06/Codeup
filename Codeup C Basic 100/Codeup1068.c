#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	printf("%c", n >= 90 ? 'A' : n >= 70 ? 'B' : n >= 40 ? 'C' : 'D');

	return 0;
}
