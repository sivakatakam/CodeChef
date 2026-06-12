#include<stdio.h>
int main()
{
    int r, b, maxi, mini, g;
    scanf("%d %d", &r, &b);
    if(r >= b)
        printf("%d", ((b * 5) + (r - b)));
    else
        printf("%d", ((r * 5) + (2 * (b - r))));
}
