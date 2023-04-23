#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int x,y,a,b;
       float s1,s2;
       scanf("%d%d%d%d",&a,&b,&x,&y);
       s1=(float)x/a;
       s2=(float)y/b;
       if(s1>s2)
       printf("CHEF\n");
       else if(s1<s2)
       printf("CHEFINA\n");
       else
       printf("BOTH\n");
    }
}
