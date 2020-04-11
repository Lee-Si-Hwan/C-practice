#include <stdio.h>

int Max(int a, int b){
	
		return b == 0 ? a : Max(b, a%b); // 유클리드 호제법! 
}

int main (){
	
	int a, b;
	
	printf("두 정수를 입력하시오 : ") ;
	scanf("%d %d", &a, &b);
	printf("최대 공약수 : %d", Max(a, b));
	
	
	return 0;
}
