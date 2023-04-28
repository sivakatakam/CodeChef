#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,s;
        scanf("%d",&x);
        if(x%10<5)
        s=x-(x%10);
        else
        s=x+10-(x%10);
        printf("%d\n",100-s);
    }
}
