#include <stdio.h>
int main (void){
	
	int a, i ;
	
	for (a = 2; a<= 8 ;){		

		if (i > a){
			i = 1;
			a += 2;
			printf("===============\n");
			
			continue;
		}
			
		printf("%d x %d = %d\n", a, i, a*i);		
		i++;
	} 
	
	return 0;
}
