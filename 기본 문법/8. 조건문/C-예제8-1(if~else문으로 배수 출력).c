#include <stdio.h>
int main (void){
	
	int a;
	
	for (int i = 1; i<100; i++){
		if (i%7 == 0)
			printf("%d ", i);

		else if (i % 9 == 0)
			printf("%d ", i);

		else{	}	
		
	} 
	
	return 0;
}
