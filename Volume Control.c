#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        a=abs(x-y);
        printf("%d\n",a);
    }
}
