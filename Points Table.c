#include<stdio.h>
int main()
{
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    if(x > a)
        printf("Alice");
    else if(a > x)
        printf("Bob");
    else
    {
        if(y >= b)
            printf("Alice");
        else
            printf("Bob");
    }
}
