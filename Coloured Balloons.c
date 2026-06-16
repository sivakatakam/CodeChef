#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int n, c = 0;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            c = c + (a[i] * (i + 1));
        }
        printf("%d\n", c);
        t--;
    }
}
