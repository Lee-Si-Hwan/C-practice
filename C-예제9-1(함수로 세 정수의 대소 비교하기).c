#include <stdio.h>

int max(int num1, int num2, int num3){
	
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;	
}

int min(int num1, int num2, int num3){
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;	
}


int main (){
	
	int a, b, c;
	
	printf("세 정수를 입력하시오 : "); 
	scanf("%d %d %d", &a, &b, &c);
	printf("가장 큰 수 : %d \n", max(a, b, c));
	printf("가장 작은 수 : %d", min(a, b, c));
	
	return 0;
}
