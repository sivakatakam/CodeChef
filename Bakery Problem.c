#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if(n * 40 > k)
        printf("%d", (n * 60) + k);
    else
        printf("%d", n * 100);
}
