#include <stdio.h>
#include <math.h>
int main ()
{
	int N,i=1;
	double sum=0;
	scanf("%d",&N);
	for(i=1;i<=3*N-2;i=i+3){
		sum=sum+pow((-1),i+1)*1.0/i; //1.0除以一个整数得到的数值是浮点型的  而不能1/i*1.0因为前面的先运算  
	}
		printf("sum = %.3f",sum);
	return 0;
}


