#include <stdio.h>
int main (void){
	
	int a = 0, b = 0, c;
	
	printf("층 수를 입력하시오 : ");
	scanf("%d", &c);
	
	while(a<c){
		while(b++<a){
			printf("o");
		}
		printf("*\n");
		b =0;
		a++;
	}
   
   return 0;
}
