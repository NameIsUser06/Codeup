#include <stdio.h>

int main() {

	char ch[21] = "";

	scanf("%s", &ch);
	
	for (int i = 0; ch[i] != NULL; i++) { // ch reset value is NULL('\0')
		printf("\'%c\'\n", ch[i]);
	}

	return 0;
}
