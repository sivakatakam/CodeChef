#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,a;
        scanf("%d%d%d",&x,&y,&z);
        a=x-y+z;
        printf("%d\n",a);
    }
}
