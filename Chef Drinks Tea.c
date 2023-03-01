#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,a;
        scanf("%d%d%d",&x,&y,&z);
        if(x%y==0)
        a=(x/y)*z;
        else
        a=((x/y)+1)*z;
        printf("%d\n",a);
    }
}
