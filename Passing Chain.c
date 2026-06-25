#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, i;
        scanf("%d %d", &n, &k);
        for(i = 1; i <= n;)
            i += k;
        printf("%d\n", i - k);
    }
}
