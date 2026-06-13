#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);
        int z = x - (y * n);
        if(z < 0)
            printf("0\n");
        else
            printf("%d\n", z);
        t--;
    }
}
