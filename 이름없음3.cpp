#include <stdio.h>
#define Maxsize 100
#include <stdlib.h>

int main()
{
	int i,n;
	float d[Maxsize],min,max;

	
	printf("�Է��� �����ʹ� ���");
	scanf("%d",&n);
	
	if (n>Maxsize) exit (0);
	
	for (i=0; i<n; i++) scanf("%f", &d[i]);
	
	min=max=d[0];
	for (i=1; i<n; i++) {
		if (d[i]<min) min=d[i];
		if (d[i]>max) max=d[i];
	}
	printf("�ִ� %f �ּ� %f \n", max, min);
	return 0;
}
