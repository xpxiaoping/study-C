#include<stdio.h>
int main(){
    char c1,c2;
    c1=getchar();//从键盘输入一个大写字母
    c2=c1+32;
    putchar(c2);
    putchar('\n');
    return 0;
}