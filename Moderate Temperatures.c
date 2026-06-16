#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, mini = 101, maxi = 0;
        scanf("%d", &n);
        int freq[101] = {0};
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(x < mini)
                mini = x;
            if(x > maxi)
                maxi = x;
            freq[x]++;
        }
        if(maxi == mini)
            printf("0\n");
        else
            printf("%d\n", n - freq[mini] - freq[maxi]);
    }
}
