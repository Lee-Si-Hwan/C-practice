#include <stdio.h>


int main (){
	
	int a, b, sum = 0, num;
	
	printf("몇 번째 까지 소수를 출력할까요? : ") ;
	scanf("%d", &num);
	
	for (a = 1; ; a++){
		
		if (sum == num)
			break;
		
		else{
			for (b = 2; b<=a ; b++){
				if (a == b){
					printf("%d ", a);
					sum += 1;
				}	
				else if (a%b == 0)
					break;
			
				else
					continue;
			}
		}	
		
	}
	
	return 0;
}
