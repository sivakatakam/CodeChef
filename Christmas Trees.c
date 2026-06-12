#include<stdio.h>
int main()
{
    int n, a, m, b;
    scanf("%d %d %d %d", &n, &a, &m, &b);
    if(n * a <= m * b)
        printf("%d", (m * b) - (n * a));
    else
    {
        printf("-");
        printf("%d", (n *a) - (m * b));
    }
}
