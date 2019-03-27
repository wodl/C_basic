#include <stdio.h>

float Fahrenheit_to_Celsuis(float);

int main()
{
	float celsuis, fahrenheit;
	printf("È­¾¾¸¦ ¼·¾¾·Î º¯È¯ÇÏ´Â ÇÁ·Î±×·¥ÀÔ´Ï´Ù\n");
	
	printf("È­¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä\n");
	scanf("%f", &fahrenheit);
	
	celsuis=Fahrenheit_to_Celsuis(fahrenheit);
	
	printf("È­¾¾%fµµ´Â ¼·¾¾%fµµÀÌ´Ù.", fahrenheit,celsuis);
	
	return 0;
	
}

float Fahrenheit_to_Celsuis(float fah)
{
	float celsuis;
	celsuis=(5.0/9.0)*(fah-32.0);
	return celsuis;
}
