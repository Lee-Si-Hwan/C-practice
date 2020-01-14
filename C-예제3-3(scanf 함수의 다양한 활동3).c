#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%dx%d+%d=%d", a, b, c, a*b+c);

    return 0;
}
