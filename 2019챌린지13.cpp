#include <stdio.h>

int main() {
	int T,V,E,P;
	scanf("%d",&T);
	
	for (int i=1;i<=T;i++) {
		scanf("%d %d",&V,&E);
		P=2-V+E;
		printf("%d\n",P);
	}
	return 0;
}
