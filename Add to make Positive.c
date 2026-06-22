#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, s = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            s += x;
        }
        if(s >= 0)
            printf("0\n");
        else
            printf("%d\n", (-s + n - 1) / n);
    }
    return 0;
}
