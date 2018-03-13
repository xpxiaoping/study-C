#include<stdio.h>
int main(){
    char a,b,c;
    a=getchar();
    b=getchar();
    c=getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n');
    return 0;
}

/*方法二
#include<stdio.h>
int main(){
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar('\n');
    return 0;
}
*/