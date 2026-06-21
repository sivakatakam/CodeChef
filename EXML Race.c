#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, p = -1, s = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            int d, ti;
            scanf("%d %d", &d, &ti);
            if(s < (d /ti))
            {
                p = i;
                s = d / ti;
            }    
        }
        printf("%d\n", p);
    }
    return 0;
}
