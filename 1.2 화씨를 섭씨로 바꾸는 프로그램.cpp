#include <stdio.h>

int main()
{
	float celsuis, fahrenheit;
	
	printf("ȭ���� ������ �ٲٴ� ���α׷��Դϴ�\n");
	printf("ȭ���� �Է��Ͻʽÿ�");
	scanf("%f", &fahrenheit);
	
	celsuis=(5.0/9.0)*(fahrenheit-32.0);
	
	printf("ȭ�� %f���� ���� %f���Դϴ�.\n", fahrenheit, celsuis);
	return 0;	
 } 
