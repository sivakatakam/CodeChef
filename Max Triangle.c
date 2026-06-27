#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if(n == 3)
            printf("-1\n");
        else
            printf("%d\n", 3 * n - 3);
    }
    return 0;
}
