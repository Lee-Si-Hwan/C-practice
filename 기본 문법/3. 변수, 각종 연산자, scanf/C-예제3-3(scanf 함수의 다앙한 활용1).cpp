#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("ù ��° ����: ");
	scanf("%d", &num1); // %d�� 10������ �޾Ƶ��δٴ� ��, &num1�� num1�� ���� �ִ´ٴ� ��
	printf("�� ��° ����: ");
	scanf("%d", &num2);

	printf("%d\n", num1 + num2);

	return 0;
}
