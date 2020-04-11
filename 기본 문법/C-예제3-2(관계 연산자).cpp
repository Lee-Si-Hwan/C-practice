#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 12;

	printf("result1 : %d\n", num1 > num2); // num1이 num2보다 큰가?
	printf("result2 : %d\n", num1 < num2); // num1이 num2보다 작은가?

	printf("result3 : %d\n", num1 >= num2); // num1이 num2보다 크거나 같은가?
	printf("result4 : %d\n", num1 <= num2); // num1이 num2보다 작거나 같은가?

	printf("result5 : %d\n", num1 == num2); // num1이 num2과 같은가?
	printf("result6 : %d\n", num1 != num2); // num1이 num2과 다른가?

	return 0;
}
// 관계 연산자들은 참이면 1, 거짓이면 0을 반환한다