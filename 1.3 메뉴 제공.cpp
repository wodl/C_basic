#include <stdio.h>
#include <stdlib.h>

int main()
{
	int choice;
	float inchi, centi_meter, celsuis, fahrenheit;
	
	printf("[������ȯ���α׷�]\n");
	printf("1. inch ��centi_meter \n");
	printf("2. fahrenheit ��celsuis\n");
	scanf("%d", &choice);
	
	if(choice==1) {
		printf("���̸� �Է��Ͻÿ�\n");
		scanf("%f", &inchi);
		centi_meter=inchi*2.54;
		printf("%f��ġ�� %f��Ƽ�����̴�.", inchi, centi_meter);
	}
	
	else if(choice==2) {
		printf("ȭ���� �Է��Ͻÿ�\n");
		printf("%f", &fahrenheit);
		celsuis=(5.0/9.0)*(fahrenheit-32.0);
		printf("ȭ��%f���� ���� %f���̴�.\n", fahrenheit, celsuis);
	}
	
	else {
		printf ("Ʋ���޴��Դϴ�.���α׷��� �����մϴ�.\n");
		exit (0); 
	}
	
	return 0;
}
