#include <stdio.h>

int main()
{

    long long int a, d, n;

    scanf("%lld %lld %lld", &a, &d, &n);

    for (int i = 1; i < n; i++) {
        a = a * d;
    }

    printf("%lld", a);
    return 0;
}
