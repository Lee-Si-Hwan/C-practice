#include <stdio.h>

int main()
{
    int a, b;

    printf("두 정수를 입력하시오.:\n");
    scanf("%d %d", &a, &b);
    printf("두 정수를 나눈 몫:%d\n", a/b);
    printf("두 정수를 나눈 나머지:%d", a%b);

    return 0;
}
