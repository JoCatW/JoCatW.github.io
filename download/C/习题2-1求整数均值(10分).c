#include<stdio.h>
int main(){
    int a,b,c,d;
    int Sum;
    double Average;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    Sum=a+b+c+d;
    Average=1.0*(a+b+c+d)/4;
    printf("Sum = %d; Average = .1%f",Sum,Average);
    return 0;
}
