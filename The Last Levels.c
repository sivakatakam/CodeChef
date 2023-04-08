#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,s,g;
        scanf("%d%d%d",&x,&y,&z);
        s=x*y;
        if(x<=3)
        g=0;
        else if(x%3!=0)
        g=(x/3)*z;
        else if(x%3==0)
        g=((x/3)-1)*z;
        printf("%d\n",s+g);
    }
}
