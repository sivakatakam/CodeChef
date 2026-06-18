#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, o = 0, e = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(i % 2 == 0)
                o += x;
            else
                e += x;
        }
        printf("%d\n", (o > e) ? o : e);
    }
}
