#include <stdio.h>
int main (void){
	
	int a = 0, total = 0;
	
	do // 일단 반복문의 수행을 1번 하고 반복을 할지 결정하는 반복문이다.
	{
		total += a;
		a += 2;
		
	}while(a<=100);
	
	printf("%d", total);
	
	  
   return 0;
}
