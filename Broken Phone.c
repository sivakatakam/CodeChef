#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y)
        printf("NEW PHONE\n");
        else if(x<y)
        printf("REPAIR\n");
        else
        printf("Any\n");
    }
}
