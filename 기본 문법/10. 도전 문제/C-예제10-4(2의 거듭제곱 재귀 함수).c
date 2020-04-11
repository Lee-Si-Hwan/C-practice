#include <stdio.h>

int Two(int n){
	
	if (n == 0)
		return 1;
		
	else
		return 2*Two(n-1);
}


int main()
{
    int a;
    
    printf("자연수를 입력하시오 : ");
    scanf("%d", &a);
    
    printf("2의 %d승은 %d", a, Two(a)); 

    return 0;
}
