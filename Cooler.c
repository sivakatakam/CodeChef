#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int n, m, s = 0;
        scanf("%d %d", &n, &m);
        for(int i = m + 1; i <= n; i++)
        {
            s = s + i;
        }
        printf("%d\n", s);
        t--;
    }
}
