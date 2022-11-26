#include <stdio.h>

int main()
{
    long long int a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    long long int result = a;

    for (int i = 1; i < d; i++) {
        result = result * b;
        result = result + c;
    }

    printf("%lld", result);

    return 0;
}
