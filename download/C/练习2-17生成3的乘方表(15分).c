#include<stdio.h>
#include<math.h>
int main(){
    int n,i,sum;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=pow(3,i);
        printf("pow(3,%d) = %d\n",i,sum);
    }
    return 0;
}
