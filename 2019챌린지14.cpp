#include <stdio.h>

int main() {
	int sum,d;
	scanf("%d",&sum);
	
	for(int i=1;i<=9;i++) {
		scanf("%d",&d);
		sum=sum-d;
	}
	printf("%d",sum);
	return 0;
}
