#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, s = 0;
        scanf("%d %d", &n, &k);
        int freq[101] = {0};
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            freq[x]++;
        }
        for(int i = 100; i > 0; i--)
        {
            while(freq[i] > 0 && k > 0)
            {
                s += i;
                k--;
                freq[i]--;
            }
        }
        printf("%d\n", s);
    }
}
