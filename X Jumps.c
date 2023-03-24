#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,s;
        scanf("%d%d",&x,&y);
        s=(x/y)+(x%y);
        printf("%d\n",s);
    }
}
