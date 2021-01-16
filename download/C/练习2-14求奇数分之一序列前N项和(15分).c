#include <stdio.h>
int main ()
{
	int N,i;
	double sum=0;
	scanf("%d",&N);
	for(i=1;i<=2*N;i=i+2){
		sum=sum+1.0/i; //1.0除以一个整数得到的数值是浮点型的  而不能1/i*1.0因为前面的先运算  
	}
		printf("sum = %f",sum);
	return 0;
}

