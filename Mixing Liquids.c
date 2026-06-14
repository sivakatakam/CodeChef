#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(b >= 2 * a)
            printf("%d\n", a * 3);
        else
            printf("%d\n", (b / 2) * 3);
        t--;
    }
}
