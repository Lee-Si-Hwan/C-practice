#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 10;

	printf("num1 = %d\n", num1);
	printf("num1++ = %d\n", num1++);// �ش� ������ ���� �� ������ ���� 1 ����
	printf("num1 = %d\n", num1);
	printf("\n");

	printf("num2 = %d\n", num2);
	printf("++num2 = %d\n", ++num2);// ������ ���� 1 ������ �� ���� ����
	printf("num2 = %d\n", num2);

	return 0;
}