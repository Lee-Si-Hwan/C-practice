#include <stdio.h>
int main (void){
	
	int a;
	int abs; 
	
	scanf("%d", &a);
	
	abs = a>0 ? a : a*(-1); // (조건) ? (조건식이 만족할 때 실행) : (조건식이 만족하지 않을 때 실행) ;
	
	printf("절댓값 : %d", abs);
	
   return 0;
}
