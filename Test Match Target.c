#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x + z - y < 0)
        printf("0");
    else
        printf("%d", x + z - y + 1);
}
