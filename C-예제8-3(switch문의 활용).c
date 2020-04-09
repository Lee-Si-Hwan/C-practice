#include <stdio.h>
int main (void){
	
	int a, b;
	
	printf(" 1~100의 수를 입력해수세요 : ");
	scanf("%d", &a);
	 
	b = a / 10; 
	
	switch(b){
		case 10:
			printf("100점!");
			break;                // break을 쓰지 않으면 지정된 case 아래에 있는 모든 case를 실행한다. 물론 이를 이용할 수도 있다. 
		case 9:
			printf("90점 대");
			break;
		case 8:
			printf("80점 대");
			break;
		case 7:
			printf("70점 대");
			break;
		default:
			printf("바보"); // default는 불필요시 생략가능하며 break이 불필요하다. 
	}
	return 0;
}
