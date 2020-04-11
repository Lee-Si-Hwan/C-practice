#include <stdio.h>
int main (void){
	
	int a = 0, z = 0;
	int az , za ;
	
	printf("az + za = 99 만족하는 경우 : \n");
	for ( ; a<10 ; a++){
		z = 1;
		for ( ; z <10 ; z++){
			az = a*10 + z;
			za = z*10 + a;
			if (az + za != 99)
				continue;
			printf("(%d, %d)\n", az, za);
		}		
	}
	return 0;
}
