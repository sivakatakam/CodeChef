#include<stdio.h>
int main()
{
    int x;
    float y,a;
    scanf("%d%f",&x,&y);
    if(x%5==0)
    {
        if(x+0.5<=y)
        a=y-x-0.5;
        else
        a=y;
    }
    else
    a=y;
    printf("%.2f",a);
}
