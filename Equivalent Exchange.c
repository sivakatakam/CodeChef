#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];
        int x, red, blue, valid, found = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(x = 0; x <= k; x++)
        {
            red = x;
            blue = k - x;
            valid = 1;
            for(int i = 0; i < n; i++)
            {
                if(a[i] > 0)
                {
                    red += a[i];
                    blue -= a[i];
                }
                if(a[i] < 0)
                {
                    blue -= a[i];
                    red += a[i];
                }
                if(red < 0 || blue < 0)
                {
                    valid = 0;
                    break;
                }
            }
            if(valid == 1)
            {
                found = 1;
                break;
            }
        }
        if(found)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
