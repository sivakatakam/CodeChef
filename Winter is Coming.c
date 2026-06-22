#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a, b, w = 0, c = 0;
        scanf("%d %d %d", &n, &a, &b);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(x < a && w == 0)
            {
                w = 1;
                c++;
            }
            if(x > b)
                w = 0;
        }
        printf("%d\n", c);
    }
    return 0;
}
