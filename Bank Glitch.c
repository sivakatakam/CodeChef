#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);
        if(a >= x)
        {
            b = b + ((a / x) * y);
            a = a % x;
        }
        printf("%d\n", a + b);
    }
    return 0;
}
