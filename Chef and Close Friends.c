#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        printf("%d\n", (y > z) ? (2 * z) : (2 * y));
    }
    return 0;
}
