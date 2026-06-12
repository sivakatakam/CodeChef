#include<stdio.h>
int main()
{
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    if(n * a >= m)
        printf("YES");
    else
        printf("NO");
}
