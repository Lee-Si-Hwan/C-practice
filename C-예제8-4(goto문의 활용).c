#include <stdio.h>
int main (void){
	
	int a;
	
	printf("자연수를 입력하시오 : ");
	
	scanf("%d", &a);
	
	if (a == 1)
		goto ONE;
	else if (a == 2)
		goto TWO;
	else if (a == 3)
		goto THREE;
	else
		goto OTHER;
		
ONE: printf("1을 입력하였습니다."); // 실행물을 한 칸 내려서 쓸 수도 있다.
	 goto End;                       // 남은 레이블 구간을 건너뛴다. 
                                      
TWO: printf("2을 입력하였습니다."); 
	 goto End;   
	 
THREE: printf("3을 입력하였습니다."); 
	 goto End;   
	 
OTHER: printf("3보다 큰 값을 입력하였습니다."); 

End:
	
	return 0;
}
