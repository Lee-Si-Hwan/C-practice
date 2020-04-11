#include <stdio.h>

int main(void)
{
	int num1 = 9;
	int num2 = 2;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d x %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d ÀÇ ¸ò = %d\n", num1, num2, num1 / num2);
	printf("%d / %d ÀÇ ³ª¸ÓÁö = %d\n", num1, num2, num1 % num2);

	return 0;

}
