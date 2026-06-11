#include<stdio.h>
int main()
{
    int n, k, t;
    scanf("%d %d", &n, &k);
    t = (n / 2) + 1;
    if(k > t)
        printf("0");
    else
        printf("%d", t - k);
}
