#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0, l = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(x != 0)
            {
                c++;
                if(c > l)
                    l = c;
            }
            else
                c = 0;
        }
        printf("%d\n", l);
    }
    return 0;
}
