#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,s;
        scanf("%d%d%d",&x,&y,&z);
        if(y%z==0)
        s=(y/z)*x;
        else
        s=x*((y/z)+1);
        printf("%d\n",s);
    }
}
