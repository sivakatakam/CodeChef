#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(x < a[i])
                c += a[i] - x;
        }
        printf("%d\n", c);
    }
}
