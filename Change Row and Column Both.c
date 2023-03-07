#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s1,s2,e1,e2;
        scanf("%d%d%d%d",&s1,&s2,&e1,&e2);
        if(s1!=e1&&s2!=e2)
        printf("1\n");
        else
        printf("2\n");
    }
}
