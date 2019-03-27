#include <stdio.h>
#include <conio.h>
 
/*오늘의 나는 멋지다*/
int main()
{
	int width,height;
	char symbol;
	int i,k;
	
	printf("직사각형,,,,그린다,,너비,,,높이,,입력,,바람,,,뿌뿌ㅇㅅㅇ33\n");
	scanf("%d%d",&width,&height);
	
	printf("테두리,,,기호두,,,입력,,,해라,,\n");
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
