#include <stdio.h>

int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4;

	printf("Before: %d, %d, %d, %d\n", num1, num2, num3, num4);

	num1 += 2; // num1 = num1 + 2
	num2 -= 2; // num2 = num2 - 2
	num3 *= 2; // num3 = num3 * 2
	num4 /= 2; // num4 = num4 / 2
	// num4 %= 2 : num4 = num4 % 2 역시 가능

	printf("After: %d, %d, %d, %d\n", num1, num2, num3, num4);

	return 0;
}