#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); // && = ��AND(��� '��'�̸� �������� '��'�� ��ȯ)
	result2 = (num1 == 10 || num2 == 11); // || = ��OR(�� �� �ϳ��� '��'�̸� �������� '��'�� ��ȯ)
	result3 = (!(num1 == 10)); // ! = ��NOT(������ '��'�̸� '����', '����'�̸� '��'�� ��ȯ)

	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2);
	printf("result3 : %d\n", result3);

	return 0;
}
/*
����) ���̸� 1, �����̸� 0�� ��ȯ�Ѵ�
*/