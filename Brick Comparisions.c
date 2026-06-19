#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, maxi = 0, a = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(maxi < x)
            {
                maxi = x;
                a = i;
            }
        }
        printf("%d\n", a + 1);
    }
    return 0;
}
