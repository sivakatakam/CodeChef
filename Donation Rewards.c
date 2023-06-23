#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<=3)
        printf("BRONZE\n");
        else if(n<=6)
        printf("SILVER\n");
        else
        printf("GOLD\n");
    }
}
