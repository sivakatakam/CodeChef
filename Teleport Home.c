#include<stdio.h>
int main()
{
    int d, t;
    scanf("%d %d", &d, &t);
    printf("%d", (d < t) ? 0 : d - t);
}
