#include <stdio.h>
int main (void){
	
	int a, i ;
	
	for (a = 2; a<= 8 ;){		

		if (i > a){
			i = 1;
			a += 2;
			printf("===============\n");
			
			continue; // 가장 가까운 반복문의 조건검사로 이동한다 (즉 6행으로 이동한다)
		}
			
		printf("%d x %d = %d\n", a, i, a*i);		
		i++;
	} 
	
	return 0;
}
