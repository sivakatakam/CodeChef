#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int s = n * k;
        printf("%d %d\n", s / 60, s % 60);
        t--;
    }
}
