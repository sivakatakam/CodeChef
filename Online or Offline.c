#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,b;
        scanf("%f%f",&a,&b);
        float c=a-(a/10);
        if(c<b)
        printf("ONLINE\n");
        else if(c>b)
        printf("DINING\n");
        else
        printf("EITHER\n");
    }
}
