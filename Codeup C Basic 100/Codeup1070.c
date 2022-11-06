#include <stdio.h>

int main() {

	int n;
	
	scanf("%d", &n);

	printf(n > 11 ? "winter" : n >= 9 ? "fall" : n >= 6 ? "summer" : n >= 3 ? "spring" : "winter");

	return 0;
}
