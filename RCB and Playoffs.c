#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(2*z>=y-x)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
