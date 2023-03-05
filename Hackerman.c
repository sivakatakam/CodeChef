#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,i,p=0;
        scanf("%d%d",&a,&b);
        c=a+b;
        for(i=1;i<=c;i++)
        {
            if(c%i==0)
            p++;
        }
        if(p==2)
        printf("Alice\n");
        else
        printf("Bob\n");
    }
}
