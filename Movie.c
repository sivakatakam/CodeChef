#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int n, m, a, b, c;
        scanf("%d %d %d %d %d", &n, &m, &a, &b, &c);
        int mini = (n < m) ?  n : m;
        int maxi = (n >= m) ? n : m;
        int r = (maxi == n) ? a : b;
        printf("%d\n", (mini * c) + (maxi - mini) * r);
        t--;
    }
}
