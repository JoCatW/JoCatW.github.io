#include <stdio.h>
int main ()
{
	int N,i;
	double sum=0;
	scanf("%d",&N);
	for(i=1;i<=2*N;i=i+2){
		sum=sum+1.0/i; //1.0����һ�������õ�����ֵ�Ǹ����͵�  ������1/i*1.0��Ϊǰ���������  
	}
		printf("sum = %f",sum);
	return 0;
}

