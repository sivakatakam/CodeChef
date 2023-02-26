#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,x,y,z;
        scanf("%d%d%d",&a,&b,&c);
        x=(a+b)/2;
        y=(b+c)/2;
        z=(a+c)/2;
        if(x>=35&&y>=35&&z>=35)
        printf("PASS\n");
        else
        printf("FAIL\n");
    }
}
