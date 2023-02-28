#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s;
        scanf("%d",&s);
        if(s<=50)
        printf("LEFT\n");
        else
        printf("RIGHT\n");
    }
}
