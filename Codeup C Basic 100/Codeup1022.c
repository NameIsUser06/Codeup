#include <stdio.h>

int main() {
	
	char data[2001];
	fgets(data, 2000, stdin); // stdin = standard input and last character is '\0' = NULL
	printf("%s", data);

	return 0;
}
