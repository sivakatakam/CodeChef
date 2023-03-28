#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,a,b,y;
        float s1,s2;
        scanf("%d%d%d%d",&a,&x,&b,&y);
        s1=(float)a/x;
        s2=(float)b/y;
        if(s1>s2)
        printf("Alice\n");
        else if(s1<s2)
        printf("Bob\n");
        else
        printf("Equal\n");
    }
}
