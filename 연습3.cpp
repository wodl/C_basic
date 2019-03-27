#include <stdio.h>

int compute_gcd(int,int);

int main()
{
	int m,n,gcd;
	printf("두개의 정수를 입력하라\n");
	scanf("%d%d",&m,&n);
	
	gcd=compute_gcd(m,n);

	printf("%d와 %d의 최대공약수는 %d이다\n",m,n,gcd);
	return 0;
}

int compute_gcd(int a, int b)
{
	int A,B,T;
	
	if (a>b) {A=a; B=b;}
	else if (a<b) {A=b; B=a;}
	
	while(1) {
	    T=A%B;
		if (T==0) break;
		else {
		A=B; B=T;}
	}
	return B;
	
}
