#include<stdio.h>

int main()
{
    int lower,upper;
    int F;
    double C;

    scanf("%d %d",&lower,&upper);
    if(lower>upper){ 
        printf("Invalid.");
    }
    else{
        printf("fahr celsius\n");
        for(F=lower;F<=upper;F+=2){
            C=5*(F*1.0-32)/9;
            printf("%d%6.1lf\n",F,C);
        }
    } 

    return 0;
}

