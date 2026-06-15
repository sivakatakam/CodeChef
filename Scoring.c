#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int a = ((y - x) / 2) + x;
        int b = y - a;
        printf("%d %d\n", a, b);
        t--;
    }
}
