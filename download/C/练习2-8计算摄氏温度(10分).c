#include<stdio.h>
int main()
{
    int fahr,celsius;
    scanf("%d",&fahr);
    celsius=5*(fahr-32)/9;
    printf("Celsius = %d\n",celsius);
    return 0;
}
