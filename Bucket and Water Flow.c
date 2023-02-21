#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,z,y,w;
        scanf("%d%d%d%d",&w,&x,&y,&z);
        if(w+y*z==x)
        printf("filled\n");
        else if(w+y*z<x)
        printf("unfilled\n");
        else
        printf("overfilled\n");
    }
}
