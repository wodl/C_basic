#include <stdio.h>
#include <stdlib.h>
#define Maxsize 1000

int main()
{
	int A[Maxsize];
	int i,j,n,temp;
	
	printf("��������� �Է�,,�Ұ�,,��?");
	scanf("%d", &n);
	
	if (n>Maxsize) exit (0);
	
	printf("����,,,�Է�,,��,,,");
	for (i=0;i<n;i++) scanf("%d",&A[i]);
	 
	i=0;
	for (j=1;j<n;j++) 
	    if (A[j]<A[0]) {
	    	i++;
	    	temp=A[i]; A[i]=A[j]; A[j]=temp;
		}
	    
	    temp=A[0]; A[0]=A[i]; A[i]=temp;
	    


}
