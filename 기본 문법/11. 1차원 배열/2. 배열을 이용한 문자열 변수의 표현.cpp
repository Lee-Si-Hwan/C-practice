#include <stdio.h>

int main()
{	
	char str[] = "Good morning!";                      // 이 배열의 길이는 13이 아닌 14다.
	
	printf("배열 str의 크기 : %d \n", sizeof(str)); // 그 이유는 문자열을 구분하기 위한 "/0"이라는 널(null) 문자가 항상 문자열 맨 뒤에 입력되기 때문이다.
    printf("널 문자의 문자형 : %c \n", str[13]);
    printf("배열 str의 크기 : % \n", str[13]);
    
    str[12] = '?'; // 저장된 문자열 데이터는 변경 가능  
    printf("문자열 출력 : %s", str);
    
    
    return 0;
}		
