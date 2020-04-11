#include <stdio.h>

int main(){
	
	char arr1[100];
	int arr1len = 0;
	char temp;
	
	printf("영단어를 입력하시오 : ");
	scanf("%s", arr1);
	
	while (arr1[arr1len] != '\0'){
		arr1len++;
	}
	
	for (int i = 0; i <arr1len/2; i++){
		temp = arr1[i];
		arr1[i] = arr1[(arr1len - i)-1];
		arr1[(arr1len - i)-1] = temp;
	}  
	
	printf("%s", arr1);
	
	return 0;
}
