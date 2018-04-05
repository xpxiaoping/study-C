/*方法一：
#include<stdio.h>
int main(){
    char c1,c2;
    c1=getchar();//从键盘输入一个大写字母
    c2=c1+32;
    putchar(c2);
    putchar('\n');
    return 0;
}
*/

//方法二：
#include<stdio.h>
int main(){
    char c1,c2;
    c1=getchar();
    c2=c1+32;
    printf("%c\n",c2);
    return 0;
}