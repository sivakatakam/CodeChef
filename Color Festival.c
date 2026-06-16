#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, v = 0;
        scanf("%d", &n);
        int freq[101] = {0};
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(freq[x] == 0)
                v++;
            freq[x] = 1;
        }
        printf("%d\n", v);
    }
}
