#include <stdio.h>
#include <conio.h>
 
/*������ ���� ������*/
int main()
{
	int width,height;
	char symbol;
	int i,k;
	
	printf("���簢��,,,,�׸���,,�ʺ�,,,����,,�Է�,,�ٶ�,,,�ѻѤ�����33\n");
	scanf("%d%d",&width,&height);
	
	printf("�׵θ�,,,��ȣ��,,,�Է�,,,�ض�,,\n");
	symbol=getch();
	
	for (i=0; i<width; i++) printf("%c",symbol);
	printf("\n");
	
	for (k=0;k<height-2; k++) {
		printf("%c",symbol);
		for (i=0; i<width-2; i++) printf(" ");
		printf("%c",symbol);
    }
    
		
	for (i=0; i<width; i++) printf("%c",symbol);
	printf("\n");
	
	return 0;
}
