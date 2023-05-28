#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0&&n%7==0)
        printf("Alice\n");
        else if(n%2==1&&n%9==0)
        printf("Bob\n");
        else
        printf("Charlie\n");
    }
}
