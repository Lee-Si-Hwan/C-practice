#include <stdio.h>

int main()
{	
	char str[] = "Good morning!";                      // �� �迭�� ���̴� 13�� �ƴ� 14��.
	
	printf("�迭 str�� ũ�� : %d \n", sizeof(str)); // �� ������ ���ڿ��� �����ϱ� ���� "/0"�̶�� ��(null) ���ڰ� �׻� ���ڿ� �� �ڿ� �ԷµǱ� �����̴�.
    printf("�� ������ ������ : %c \n", str[13]);
    printf("�迭 str�� ũ�� : % \n", str[13]);
    
    str[12] = '?'; // ����� ���ڿ� �����ʹ� ���� ����  
    printf("���ڿ� ��� : %s", str);
    
    
    return 0;
}		
