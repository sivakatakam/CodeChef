#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, e = 0, o = 0, c = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            c += x;
            if(e == 0 || o == 0)
            {
                if(x % 2 == 0)
                    e = 1;
                else
                    o = 1;
            }
        }
        printf("%s\n", ((c % 2 == 0 && e == 1) || (c % 2 == 1 && o == 1)) ? "YES" : "NO");
    }
}
