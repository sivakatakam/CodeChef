#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x;
        scanf("%d", &x);
        if(x % 3 == 0)
            printf("3\n");
        else
            printf("1\n");
    }
    return 0;
}
