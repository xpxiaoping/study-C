//求两个整数中的较大者
#include<stdio.h>
int main(){
    int max(int x,int y);
    int a,b,c;
    printf("请输入两个整数，中间以','号隔开\n");
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("最大数max=%d\n",c);
    return 0;
}
int max(int x,int y){
    int z;
    if(x>y)z=x;
    else z=y;
    return(z);
}