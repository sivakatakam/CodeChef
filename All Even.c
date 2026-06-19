#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            c += x;
        }
        printf("%s\n", (c % 2 ==0) ? "YES" : "NO");
    }
    return 0;
}
