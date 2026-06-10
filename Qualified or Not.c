#include<stdio.h>
int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    if(n >= (2 * x) && n >= (2 * y))
        printf("YES");
    else
        printf("NO");
    return 0;
}
