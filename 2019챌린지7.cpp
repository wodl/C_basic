#include <stdio.h>

int main() {
	int A,B,C;
 	int h,m;
 	
	scanf("%d %d",&A,&B);
	scanf("%d",&C);
	
	h=A+(B+C)/60;
	if (h>=24) { 
	h=h-24;
	}
	m=(B+C)%60;
	
	printf("%d %d",h,m);
	
	return 0;
	
}
