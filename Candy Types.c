#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0, ca = 0;
        scanf("%d", &n);
        int freq[101] = {0}, a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }
        for(int i = 1; i <= n; i++)
        {
            if(freq[i] > c)
            {
                c = freq[i];
                ca = i;
            }
        }
        printf("%d\n", ca);
    }
}
