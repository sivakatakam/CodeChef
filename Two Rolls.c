#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%s\n", (((50 - x) >= (2 * y)) && ((50 - x) <= (2 * (y + 5)))) ? "YES" : "NO");
    }
    return 0;
}
