#include <stdio.h>

int main () {
	int a,b,c,m;
	int reward;
	scanf("%d %d %d",&a,&b,&c);

	if (a==b && b==c && c==a) {
		reward=10000+a*1000;
		printf("%d",reward);
	}
	else if (a!=b && b!=c && c!=a) {
		if (a>b && a>c) {
			m=a;
		}
		else if (b>c) {
			m=b;
		}
		else {
			m=c;
		}
		reward=m*100;
	}
	else {
		if (a==b || a==c) {
			m=a;
		}
		else {
			m=b;
		}
		reward=1000+m*100;
	}
	printf("%d",reward);
	return 0;
}
