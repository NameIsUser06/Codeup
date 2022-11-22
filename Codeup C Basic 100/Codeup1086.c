#include <stdio.h>
#include <math.h>
int main()
{
    int w, h, b;

    scanf("%d %d %d", &w, &h, &b);

    double result = (double)w * (double)h * (double)b;

    result /= pow(2, 23);
    
    printf("%.2lf MB", result);

    return 0;
}
