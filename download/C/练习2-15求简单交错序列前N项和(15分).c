#include <stdio.h>
#include <math.h>
int main ()
{
	int N,i=1;
	double sum=0;
	scanf("%d",&N);
	for(i=1;i<=3*N-2;i=i+3){
		sum=sum+pow((-1),i+1)*1.0/i; //1.0����һ�������õ�����ֵ�Ǹ����͵�  ������1/i*1.0��Ϊǰ���������  
	}
		printf("sum = %.3f",sum);
	return 0;
}


