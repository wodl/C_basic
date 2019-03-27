#include <stdio.h>
#include <stdlib.h>

int main()
{
	int choice;
	float inchi, centi_meter, celsuis, fahrenheit;
	
	printf("[단위변환프로그램]\n");
	printf("1. inch →centi_meter \n");
	printf("2. fahrenheit →celsuis\n");
	scanf("%d", &choice);
	
	if(choice==1) {
		printf("길이를 입력하시오\n");
		scanf("%f", &inchi);
		centi_meter=inchi*2.54;
		printf("%f인치는 %f센티미터이다.", inchi, centi_meter);
	}
	
	else if(choice==2) {
		printf("화씨를 입력하시오\n");
		printf("%f", &fahrenheit);
		celsuis=(5.0/9.0)*(fahrenheit-32.0);
		printf("화씨%f도는 섭씨 %f도이다.\n", fahrenheit, celsuis);
	}
	
	else {
		printf ("틀린메뉴입니다.프로그램을 종료합니다.\n");
		exit (0); 
	}
	
	return 0;
}
