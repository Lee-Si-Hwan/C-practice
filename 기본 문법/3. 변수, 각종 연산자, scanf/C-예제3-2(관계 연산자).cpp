#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 12;

	printf("result1 : %d\n", num1 > num2); // num1�� num2���� ū��?
	printf("result2 : %d\n", num1 < num2); // num1�� num2���� ������?

	printf("result3 : %d\n", num1 >= num2); // num1�� num2���� ũ�ų� ������?
	printf("result4 : %d\n", num1 <= num2); // num1�� num2���� �۰ų� ������?

	printf("result5 : %d\n", num1 == num2); // num1�� num2�� ������?
	printf("result6 : %d\n", num1 != num2); // num1�� num2�� �ٸ���?

	return 0;
}
// ���� �����ڵ��� ���̸� 1, �����̸� 0�� ��ȯ�Ѵ�