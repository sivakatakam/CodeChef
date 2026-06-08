#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(z <= 50)
        printf("%d", x);
    else
            printf("%d", x + ((z - 50) * y));
}
