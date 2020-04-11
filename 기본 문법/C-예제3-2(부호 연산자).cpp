#include <stdio.h>

int main(void)
{
	int num1 = +2;
	int num2 = -4;  //+, - 연산자는 부호를 결정할 수도 있다

	printf("%d + %d = %d", num1, num2, num1 + num2);

	return 0;
}