#include <stdio.h>
#include <math.h>

int main()
{
	int height;
	int i,k;
	
	printf("다이아,,,갖구싶냐,,,,그려줄겡,,,,얼만치,,,그려줄까,,,ㅇㅅㅇ?\n");
	/*오늘의 재이는 다이아몬드보다 멋지다는 뜻*/ 
	scanf("%d", &height); 
	
	for (k=1; k<=height; k++) {
		if (k<=ceil(height-2.0)) {
			for (i=1;i<ceil(height/2.0)-k; i++) printf(" ");
			printf("*");
			if(k!=1) {
				for (i=1; i<=2*k-3; i++) printf(" ");
				printf("*");
			} 
			printf("\n");
		}
		else {
			for (i=1; i<=k-ceil(height/2.0+0.5); i++) printf(" ");
			printf("*");
			if(k!=height) {
				for (i=1; i<=2*(height-k)-1; i++) printf(" ");
				printf("*");
			}
			printf("\n");
		}
	}
	
	return 0;
}
