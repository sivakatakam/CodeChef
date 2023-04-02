#include<stdio.h>
int main()
{
    int x,y,s;
    scanf("%d%d",&x,&y);
    if(x>y)
    s=x-y;
    else
    s=x+y;
    printf("%d",s);
}
