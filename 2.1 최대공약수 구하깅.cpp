#include <stdio.h>

int main()
{
	int m,n,T;
	
	printf("�ΰ��� ������ �Է��϶�\n");
	scanf("%d%d", &m, &n);
	
	if(m<n) T=m;
	else T=n;
	
	while (!(m%T==0 && n%T==0)) T=T-1;
	
	printf("%d�� %d�� �ִ������� %d�̴�\n", m,n,T);
	return 0;
}
