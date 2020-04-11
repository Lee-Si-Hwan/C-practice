#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("첫 번째 정수: ");
	scanf("%d", &num1); // %d은 10진수로 받아들인다는 뜻, &num1은 num1에 값을 넣는다는 뜻
	printf("두 번째 정수: ");
	scanf("%d", &num2);

	printf("%d\n", num1 + num2);

	return 0;
}
