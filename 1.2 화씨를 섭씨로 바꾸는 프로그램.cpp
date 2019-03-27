#include <stdio.h>

int main()
{
	float celsuis, fahrenheit;
	
	printf("화씨를 섭씨로 바꾸는 프로그램입니다\n");
	printf("화씨를 입력하십시오");
	scanf("%f", &fahrenheit);
	
	celsuis=(5.0/9.0)*(fahrenheit-32.0);
	
	printf("화씨 %f도는 섭씨 %f도입니다.\n", fahrenheit, celsuis);
	return 0;	
 } 
