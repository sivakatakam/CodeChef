#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,s;
        scanf("%d",&p);
        s=(p/100)+(p%100);
        if(s<=10)
        printf("%d\n",s);
        else
        printf("-1\n");
    }
}
