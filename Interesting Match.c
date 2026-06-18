#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%s", (abs(x - y) <= 2) ? "Interesting" : "Boring");
}
