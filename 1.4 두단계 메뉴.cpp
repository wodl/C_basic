#include <stdio.h>
#include <stdlib.h>

int main()
{
	int main_choice, sub_choice;
	float inchi, centi_meter, fahrenheit, celsuis;
	
	printf("[������ȯ���α׷�]\n");
	printf(" 1. ��ġ�꼾Ƽ����\n");
	printf(" 2. ȭ���꼷��\n");
	scanf("%d", &main_choice);
	
	if (main_choice==1) {
		printf("1. ��ġ�漾Ƽ����\n");
		printf("2. ��ġ�缾Ƽ����\n");
		scanf("%d", &sub_choice);
		
		if (sub_choice==1){
			printf("��ġ�� �Է��Ͻÿ�\n");
			scanf("%f", &inchi);
			centi_meter=inchi*2.54;
			printf("%f��ġ�� %f��Ƽ�����̴�.", inchi, centi_meter);
		}
		else if (sub_choice==2) {
			printf("��Ƽ���͸� �Է��Ͻÿ�\n");
			scanf("%f",&centi_meter);
			inchi=centi_meter/2.54;
			printf("%f��Ƽ���ʹ� %f��ġ�̴�.\n", centi_meter, inchi);
		}
		else {
			printf("Ʋ�� �޴��Դϴ�.\n");
			exit(0);
		}
	}
		
	else if (main_choice==2) {
		printf("1. ȭ���漷��\n");
		printf("2. ȭ���缷��\n");
		scanf("%d", &sub_choice);
		
		if (sub_choice==1) {
			printf("ȭ���� �Է��Ͻÿ�\n");
			scanf("%f", &fahrenheit);
			celsuis=(5.0/9.0)*(fahrenheit-32.0);
			printf("ȭ��%f���� ����%f���̴�\n", fahrenheit, celsuis);
		}
		else if (sub_choice==2) {
			printf("������ �Է��Ͻÿ�\n");
			scanf("%f", &celsuis);
			fahrenheit=(9.0/5.0)*celsuis+32.0;
			printf("����%f���� ȭ��%f���̴�\n", celsuis, fahrenheit);
		}
		else {
		printf("Ʋ�� �޴��Դϴ�. ���α׷��� �����մϴ�.\n");
		exit(0);
		}
	}
	else {
		printf("Ʋ�� �޴��Դϴ�. ���α׷��� �����մϴ�.\n");
		exit(0);
	}
	
	return 0;
}
