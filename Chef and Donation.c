#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d",&x,&y);
        z=y-x;
        printf("%d\n",z);
    }
}
