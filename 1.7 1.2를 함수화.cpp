#include <stdio.h>
#include <stdlib.h>

float Farenheit_to_Celsuis(float);

int main()
{
	float celsuis, fahrenheit;
	
	printf("ȭ���� ������ ��ȭ�ϴ� ���α׷��Դϴ�\n");
	
	printf("ȭ���� �Է��Ͻʽÿ�\n");
	scanf("%f", &fahrenheit);
	
	celsuis=Farenheit_to_Celsuis(fahrenheit);
	
	printf("ȭ��%f���� ����%f���̴�\n", fahrenheit, celsuis);
	return 0;
}

float Farenheit_to_Celsuis(float fah)
{
	float celsuis;
	
	celsuis=(5.0/9.0)*(fah-32.0);
	return celsuis;
}
