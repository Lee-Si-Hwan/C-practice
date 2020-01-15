#include <stdio.h>

int main()
{
	int a = 5;// 00000000 00000000 00000000 00000101
	int b = 7;// 00000000 00000000 00000000 00000111

	printf("%d", a&b);//a와 b의 비트단위 &연산

	return 0;
}
