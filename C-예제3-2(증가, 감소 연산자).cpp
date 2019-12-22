#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 10;

	printf("num1 = %d\n", num1);
	printf("num1++ = %d\n", num1++);// 해당 문장을 실행 후 변수의 값을 1 증가
	printf("num1 = %d\n", num1);
	printf("\n");

	printf("num2 = %d\n", num2);
	printf("++num2 = %d\n", ++num2);// 변수의 값을 1 증가한 후 문장 실행
	printf("num2 = %d\n", num2);

	return 0;
}