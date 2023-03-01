#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a*10>b*5)
        printf("FIRST\n");
        else if(a*10<b*5)
        printf("SECOND\n");
        else
        printf("ANY\n");
    }
}
