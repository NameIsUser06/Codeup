#include <stdio.h>

int main()
{
    
    int a, d, n;

    scanf("%d %d %d", &a, &d, &n);

    int result = 0;
    result += a;

    for (a = 1; a < n; a++) {
        result += d;
    }

    printf("%d", result);

    return 0;
}
