#include <stdio.h>
#include <math.h>
int main ()
{
	int N,n;
	double sum=0;
	scanf("%d",&N);
	for(n=1;n<=N;n++){
		sum=sum+sqrt(n);  
	}
		printf("sum = %.2f",sum);
	return 0;
}
