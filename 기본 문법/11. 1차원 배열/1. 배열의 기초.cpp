#include <stdio.h>

int main(){
	
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5,6,7}; // �̷��� �ڵ����� 7�� ������ 
	int arr3[5] = {1,2}; // �̷��� ���� �ڸ��� 0���� ä����
	 
	
	printf("arr1�� ũ��: %d\n", sizeof(arr1)); // �̷��� ����Ʈ ������ �迭ũ�Ⱑ ��ȯ�ȴ�. 
	printf("arr1�� �迭�� ����: %d", sizeof(arr1)/sizeof(int)); //���̴� �迭ũ�⸦ int�� ������ �Ѵ�. 
	
	return 0;
}
