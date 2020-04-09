#include <stdio.h>

void print(int num1){                  // 인자 전달 O , 반환 값X 

	printf("출력: %d \n", num1); 
} 

int hello(void){                     // 인자 전달 X , 반환 값O 
	int num2;
	printf("입력해 : ");
	scanf("%d", &num2);
	return num2;
}

void nope(void){                     // 인자 전달 X , 반환 값X 
	printf("come on baby");
}

int main (){
	
	print(4);
	printf("%d \n", hello());
	nope();
  return 0;
}
