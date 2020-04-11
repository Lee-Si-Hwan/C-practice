#include <stdio.h>

int Total(int num1){
	static int total = 0; // 지역 변수를 정의할 때 스테틱 변수를 지정하면 한 번 정의 후에 다시 함수가 실행되도 정의 되지 않고 메모리가 남아있.
	total += num1;
	return total;
	
}

int main (){
	
	int i, num;
	
	for (i = 0; i<3; i++){
		printf("입력%d : ", i+1);
		scanf("%d", &num);
		printf("누적 : %d \n", Total(num));
	}
	return 0;
}
