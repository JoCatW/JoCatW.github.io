#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, m;
	double sum;
	scanf("%d%d", &m, &n);
	sum=0;
	for(i=m; i<=n; i++){
		sum=sum+pow(i,2)+1.0/i;
	}
	printf("sum = %.6f", sum);
	
	return 0;
}

