#include <stdio.h>

void Fibo(int num1){
	int a = 0, b = 1, c = 0;
	if (num1 == 1)
		printf("0 ");
	else
		printf("0 1 ");
		
	for (int i = 1; i < num1 -1; i++){
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
	}
	
}

int main (){
	
	int a;
	printf("피보나치 수열의 몇 번째까지 출력하실 건가요? : ");
	scanf("%d", &a);
    Fibo(a);
	return 0;
}
