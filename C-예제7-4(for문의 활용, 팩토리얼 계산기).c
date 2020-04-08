int main (void){
	
	int a = 0 ;
	int fac = 1;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	
	for (int i = 1 ; i <= a; i++){
		fac *= i;
	}
	
	printf("%d! = %d", a, fac);
	  
   return 0;
}
