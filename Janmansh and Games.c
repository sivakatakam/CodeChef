#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if((x+y)%2==0)
        printf("JANMANSH\n");
        else
        printf("JAY\n");
    }
}
