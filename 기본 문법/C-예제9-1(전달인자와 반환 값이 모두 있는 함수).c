#include <stdio.h>

int add(int num1, int num2){

	return num1 + num2;
} 

int main (){
	int a, b;
	
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	
	printf("%d + %d = %d", a, b, add(a,b));
	
	return 0;
}
