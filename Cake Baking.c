#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(m >= 2 * n)
        printf("%d", n);
    else
    {
        printf("%d", m - n);
    }
}
