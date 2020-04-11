#include <stdio.h>

int main(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;// 변수선언은 앞에 먼저 해야 에러가 안 뜬다

	printf("덧셈 결과: %d\n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다\n", num1, num2, result);

	return 0;
}
