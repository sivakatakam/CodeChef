#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,r;
        scanf("%d%d%d",&x,&y,&z);
        if(y>x*10)
        {
            r=x*10*z;
        }
        else
        {
            r=y*z;
        }
        printf("%d\n",r);
    }
}
