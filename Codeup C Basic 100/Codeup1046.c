#include <stdio.h>

int main() {
	
	long long int a, b, c;

	scanf("%lld%lld%lld", &a, &b, &c);

	long long int d = a + b + c;

	printf("%lld\n", d);

	printf("%.1lf\n", ((double)d / 3));

	return 0;
}
