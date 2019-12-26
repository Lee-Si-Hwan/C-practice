#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d x %d = %d\n", num1, num2, num1 * num2);

	return 0;
}