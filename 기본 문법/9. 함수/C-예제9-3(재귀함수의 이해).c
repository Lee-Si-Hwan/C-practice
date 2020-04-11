#include <stdio.h>

int Fac(int num1){
	
	if (num1 == 0)
		return 1;
	else
		return num1 * Fac(num1-1); // 재귀함수란 함수가 끝나기 전에 한 번 더 함수를 실행시키는 함수이다.  
	
}

int main (){
	
	int a;
	
	printf("정수를 입력하시오 : ") ;
	scanf("%d", &a);
	printf("%d! = %d", a, Fac(a));
	
	
	return 0;
}
