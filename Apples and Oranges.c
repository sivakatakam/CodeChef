#include<stdio.h>
int main()
{
    int r,a,o,ans;
    scanf("%d%d%d",&r,&a,&o);
    ans=a+o;
    if(ans<=r)
    printf("YES\n");
    else
    printf("NO\n");
}
