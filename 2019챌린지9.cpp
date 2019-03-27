#include <stdio.h>

int main() {
	int a1,a2,b1,b2,c1,c2,d1,d2;
	int s1=0,s2=0,s3=0,s4=0;
	
	scanf("%d %d",&a1,&a2);
	scanf("%d %d",&b1,&b2);
	scanf("%d %d",&c1,&c2);
	scanf("%d %d",&d1,&d2);
	
	s1=a2-a1;
	s2=a2-b1+b2;
	s3=s2-c1+c2;
	s4=s3-d1+d2;
	
	if (s1>=s2 && s1>=s3) {
		printf("%d",s1);
	}
	else if ( s2>=s3) {
		printf("%d", s2);
	}
	else {
		printf("%d", s3);
	}
	return 0;
}
