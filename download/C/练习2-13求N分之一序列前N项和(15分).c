#include <stdio.h>
#include <math.h>
int main ()
{
	int N,i;
	double sum=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		sum=sum+1.0/i; //1.0����һ�������õ�����ֵ�Ǹ����͵�  ������1/i*1.0��Ϊǰ���������  
	}
		printf("sum = %f",sum);
	return 0;
}

