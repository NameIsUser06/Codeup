#include <stdio.h>
#include <math.h>
int main()
{
    int h, b, c, s;

    double result = 0;

    scanf("%d %d %d %d", &h, &b, &c, &s);

    result = (double)h * (double)b * (double)c * (double)s;

    result /= pow(2, 23);

    printf("%.1lf MB", result);
    return 0;
}
