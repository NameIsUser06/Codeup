#include <stdio.h>

int main()
{
    int a, b, c;

    int d = 1;

    scanf("%d %d %d", &a, &b, &c);

    int i = 1;
    while (i % a != 0 || i % b != 0 || i % c != 0) i++;

    printf("%d", i);

    return 0;
}
