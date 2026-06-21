#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, l = 1001;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if((a > 6) && (b < l))
                l = b;
        }
        printf("%d\n", (l == 1001) ? -1 : l);
    }
    return 0;
}
