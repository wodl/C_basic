#include <stdio.h>
#include <stdlib.h>

int main()
{
	int main_choice, sub_choice;
	float inchi, centi_meter, fahrenheit, celsuis;
	
	printf("[단위변환프로그램]\n");
	printf(" 1. 인치↔센티미터\n");
	printf(" 2. 화씨↔섭씨\n");
	scanf("%d", &main_choice);
	
	if (main_choice==1) {
		printf("1. 인치→센티미터\n");
		printf("2. 인치←센티미터\n");
		scanf("%d", &sub_choice);
		
		if (sub_choice==1){
			printf("인치를 입력하시오\n");
			scanf("%f", &inchi);
			centi_meter=inchi*2.54;
			printf("%f인치는 %f센티미터이다.", inchi, centi_meter);
		}
		else if (sub_choice==2) {
			printf("센티미터를 입력하시오\n");
			scanf("%f",&centi_meter);
			inchi=centi_meter/2.54;
			printf("%f센티미터는 %f인치이다.\n", centi_meter, inchi);
		}
		else {
			printf("틀린 메뉴입니다.\n");
			exit(0);
		}
	}
		
	else if (main_choice==2) {
		printf("1. 화씨→섭씨\n");
		printf("2. 화씨←섭씨\n");
		scanf("%d", &sub_choice);
		
		if (sub_choice==1) {
			printf("화씨를 입력하시오\n");
			scanf("%f", &fahrenheit);
			celsuis=(5.0/9.0)*(fahrenheit-32.0);
			printf("화씨%f도는 섭씨%f도이다\n", fahrenheit, celsuis);
		}
		else if (sub_choice==2) {
			printf("섭씨를 입력하시오\n");
			scanf("%f", &celsuis);
			fahrenheit=(9.0/5.0)*celsuis+32.0;
			printf("섭씨%f도는 화씨%f도이다\n", celsuis, fahrenheit);
		}
		else {
		printf("틀린 메뉴입니다. 프로그램을 종료합니다.\n");
		exit(0);
		}
	}
	else {
		printf("틀린 메뉴입니다. 프로그램을 종료합니다.\n");
		exit(0);
	}
	
	return 0;
}
