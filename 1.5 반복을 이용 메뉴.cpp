#include <stdio.h>
#include <stdlib.h>

int main()
{
	int choice;
	float inchi, centi_meter, fahrenheit, celsuis;
	
	printf("[단위변환프로그램]\n");
	printf(" 1. 인치→센티미터\n");
	printf(" 2. 화씨→섭씨\n");
	printf(" 3.끝내기\n\n");
	printf("메뉴를 선택하시오\n");
	scanf("%d", &choice);
	
	while (choice!=3) {
		if (choice==1) {
			printf("인치를 입력하라\n");
			scanf("%f", &inchi);
			centi_meter=inchi*2.54;
			printf("%f인치는 %f센티미터이다.", inchi, centi_meter);
		}
		else if (choice==2) {
			printf("화씨를 입력하라\n");
			scanf("%f", &fahrenheit);
			celsuis=(5.0/9.0)*(fahrenheit-32.0);
			printf("화씨%f도는 섭씨%f도이다\n", fahrenheit, celsuis);
		}
		else {
			printf("틀린 메뉴입니다. 프로그램을 종료합니다\n");
			exit (0);
		} 
		printf("[단위변환프로그램]\n");
		printf(" 1. 인치→센티미터\n");
		printf(" 2. 화씨→섭씨\n");
		printf(" 3.끝내기\n\n");
		printf("메뉴를 선택하시오\n");
		scanf("%d", &choice);
	}
	
	printf("프로그램을 정상종료합니다.");
	return 0;
}
