#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if(n % 2 != 0)
            n--;
        int s = n / 2;
        int a = s / 2;
        int b = s - a;
        printf("%d\n", a * b);
    }
    return 0;
}
