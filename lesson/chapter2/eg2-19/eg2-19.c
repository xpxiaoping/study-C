//求1-1/2+1/3-1/4+...+1/99-1/100
#include<stdio.h>
int main(){
    int sign=1;
    double deno=2.0,sum=1.0,term=1.0;
    while(deno<=100){
        sign=-sign;
        term=sign/deno;
        sum=sum+term;
        deno=deno+1;
    }
    printf("1-1/2+1/3-1/4+...+1/99-1/100=%f\n",sum);
    return 0;
}