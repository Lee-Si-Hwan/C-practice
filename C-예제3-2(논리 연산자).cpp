#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); // && = 논리AND(모두 '참'이면 연산결과로 '참'을 반환)
	result2 = (num1 == 10 || num2 == 11); // || = 논리OR(둘 중 하나라도 '참'이면 연산결과로 '참'을 반환)
	result3 = (!(num1 == 10)); // ! = 논리NOT(조건이 '참'이면 '거짓', '거짓'이면 '참'을 반환)

	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2);
	printf("result3 : %d\n", result3);

	return 0;
}
/*
정보) 참이면 1, 거짓이면 0을 반환한다
*/