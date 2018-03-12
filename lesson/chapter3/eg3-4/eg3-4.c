#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,s,area;
    a=3.67;
    b=5.43;
    c=6.21;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));//注意用gcc编译的时候需要加“-lm”引用库，否则编译时会报错
    printf("a=%f\tb=%f\tc=%f\n",a,b,c);
    printf("area=%f\n",area);
    return 0;
}