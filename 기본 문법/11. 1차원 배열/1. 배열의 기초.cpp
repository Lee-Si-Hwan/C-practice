#include <stdio.h>

int main(){
	
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5,6,7}; // 이러면 자동으로 7이 지정됨 
	int arr3[5] = {1,2}; // 이러면 남은 자리는 0으로 채워짐
	 
	
	printf("arr1의 크기: %d\n", sizeof(arr1)); // 이러면 바이트 단위의 배열크기가 반환된다. 
	printf("arr1의 배열의 길이: %d", sizeof(arr1)/sizeof(int)); //길이는 배열크기를 int로 나눠야 한다. 
	
	return 0;
}
