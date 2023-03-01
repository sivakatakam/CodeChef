#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x%4==0)
        printf("GOOD\n");
        else
        printf("NOT GOOD\n");
    }
}
