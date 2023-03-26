#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,d;
        scanf("%d%d%d",&x,&y,&d);
        if(abs(x-y)<=d)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
