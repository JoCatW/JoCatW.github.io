#include<stdio.h>
int main(void)
{
	int i, flag, b, d, n;
	double sum;
	scanf("%d", &n);
	sum=0; 
	flag=1;
	d=1;
	b=1;
	for(i=1; i<=n; i++){
		sum=sum+b*flag*1.0/d;
		flag=flag+1;
		b=-b;
		d=d+2;
	}
	printf("%.3f", sum);
	
	return 0;
}
