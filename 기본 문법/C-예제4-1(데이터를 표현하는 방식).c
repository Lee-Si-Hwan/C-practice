#include <stdio.h>

int main()
{
    int num1 = 0xA7, num2 = 0x43; // 0x로 시작하면 16진수로 설정
    int num3 = 032, num4 = 024;  // 0으로 시작하면 8진수로 설정

    printf("0xA7의 10진수 정수 값:%d\n", num1);
    printf("0x43의 10진수 정수 값:%d\n", num2);
    printf(" 032의 10진수 정수 값:%d\n", num3);
    printf(" 024의 10진수 정수 값:%d\n", num4);

    return 0;
}
