#include <stdio.h>

float Fahrenheit_to_Celsuis(float);

int main()
{
	float celsuis, fahrenheit;
	printf("ȭ���� ������ ��ȯ�ϴ� ���α׷��Դϴ�\n");
	
	printf("ȭ���� �Է��ϼ���\n");
	scanf("%f", &fahrenheit);
	
	celsuis=Fahrenheit_to_Celsuis(fahrenheit);
	
	printf("ȭ��%f���� ����%f���̴�.", fahrenheit,celsuis);
	
	return 0;
	
}

float Fahrenheit_to_Celsuis(float fah)
{
	float celsuis;
	celsuis=(5.0/9.0)*(fah-32.0);
	return celsuis;
}
