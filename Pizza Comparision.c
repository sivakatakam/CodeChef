#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if((a / 100.0) < (b / 225.0))
            printf("Small\n");
        else if((a / 100.0) > (b / 225.0))
            printf("Large\n");
        else
            printf("Equal\n");
    }
}
