#include <stdio.h>
#include <stdlib.h>

void display_menu();

int main()
{
	int choice;
	float celsuis,fahrenheit,inchi,centi_meter;
	
	display_menu();
	scanf("%d", &choice);
	
	while (choice!=3) {
		
		if (choice==1) {
			printf("��ġ�� �Է��϶�\n");
			scanf("%f", &inchi);
			centi_meter=inchi*2.54;
			printf("%f��ġ�� %f��Ƽ�����̴�\n",inchi, centi_meter);
		}
		
		else if (choice==2) {
			printf("ȭ���� �Է��϶�\n");
			scanf("%f", &fahrenheit);
			celsuis=(5.0/9.0)*(fahrenheit-32.0);
			printf("ȭ��%f���� ����%f���̴�\n",fahrenheit,celsuis);
		}
		
		else {
			printf("Ʋ���޴��Դϴ�. ���α׷��� �����մϴ�\n");
			exit (0);
		}
		
		display_menu();
		scanf("%d", &choice);
	}
	
	printf("���α׷��� ���������մϴ�\n");
	return 0;
}

void display_menu()
{
	printf("[������ȯ���α׷�]\n");
	printf(" 1.��ġ�漾Ƽ����\n");
	printf(" 2.ȭ���漷��\n");
	printf(" 3.������\n");
	printf("�޴��� �����Ͻÿ�\n"); 
}
