#include <stdio.h>

int compute_gcd(int,int);

int main()
{
	int m,n,gcd;
	printf("�ΰ��� ������ �Է��϶�\n");
	scanf("%d%d",&m,&n);
	
	gcd=compute_gcd(m,n);

	printf("%d�� %d�� �ִ������� %d�̴�\n",m,n,gcd);
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
