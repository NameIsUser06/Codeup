#include <stdio.h>

int main() {

	char n;

	scanf("%c", &n);

	printf("%s", n == 'A' ? "best!!!" : n == 'B' ? "good!!" : n == 'C' ? "run!" : n == 'D' ? "slowly~" : "what?");

	return 0;
}
