#include<stdio.h>
int main(){
    int a,b,c,i,max;
    printf("请输入a,b,c:\n");
    scanf("%d,%d，%d",&a,&b,&c);
    if(a>b)i=a;
    else i=b;
    if(i>c)max=i;
    else max=c;
    printf("最大数max=%d\n",max);
    return 0;
}