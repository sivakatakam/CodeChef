#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, s = 0, p = -1;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);
            s += x;
            if(s / i < 40)
                p = 0;
        }
        printf("%s\n", (p == 0) ? "NO" : "YES");
    }
    return 0;
}
