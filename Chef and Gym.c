#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(z<x)
        printf("0\n");
        else if(z>=x&&z<x+y)
        printf("1\n");
        else
        printf("2\n");
    }
}
