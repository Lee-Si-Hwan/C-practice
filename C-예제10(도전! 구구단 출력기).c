#include <stdio.h>

void Goo(int a, int b){
	for(int j = a; j<= b; j++){

		printf("%d단: \n", j);
		for (int i = 1; i<= 9; i++){
			printf("%d x %d = %d \n", j, i, j*i);
		}
	}	
}

int main (){
	
	int a, b;
	
	printf("두 정수를 입력하시오 : ") ;
	scanf("%d %d", &a, &b);
	Goo(a, b);
	
	
	return 0;
}
