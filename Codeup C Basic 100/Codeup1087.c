#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);

    int b = 1;

    int result = 0;
    
    while (1) {
        if (result >= a) {
            printf("%d", result);
            break;
        }
        else {
            result += b;
            b++;
        }
    }

    return 0;
}
