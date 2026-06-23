#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        if((n + 1) * y >= x)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
