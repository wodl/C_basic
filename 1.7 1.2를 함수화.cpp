#include <stdio.h>
#include <stdlib.h>

float Farenheit_to_Celsuis(float);

int main()
{
	float celsuis, fahrenheit;
	
	printf("화씨를 섭씨로 변화하는 프로그램입니다\n");
	
	printf("화씨를 입력하십시오\n");
	scanf("%f", &fahrenheit);
	
	celsuis=Farenheit_to_Celsuis(fahrenheit);
	
	printf("화씨%f도는 섭씨%f도이다\n", fahrenheit, celsuis);
	return 0;
}

float Farenheit_to_Celsuis(float fah)
{
	float celsuis;
	
	celsuis=(5.0/9.0)*(fah-32.0);
	return celsuis;
}
