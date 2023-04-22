#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q;
        scanf("%d%d",&p,&q);
        if((p+q)%4==0||(p+q)%4==1)
        printf("Alice\n");
        else
        printf("Bob\n");
    }
}
