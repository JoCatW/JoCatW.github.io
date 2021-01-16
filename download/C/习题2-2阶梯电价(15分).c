#include <stdio.h>
int main()
{
	int x;
	double cost;
	scanf("%d", &x);
	if(x>50){
		cost=50*0.53+(x-50)*0.58;
		printf("cost = %.2f", cost);
	}
	else if(x>0){
		cost=0.53*x;
		printf("cost = %.2f", cost);
	}
	else
		printf("Invalid Value!\n");
		
	return 0;
 } 

