#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<y)
        printf("FIRST\n");
        else if(x>y)
        printf("SECOND\n");
        else
        printf("ANY\n");
    }
}
