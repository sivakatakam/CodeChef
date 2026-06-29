#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int maxi = z;
        if(x > maxi)
            maxi = x;
        if(y > maxi)
            maxi = y;
        int mini = x;
        if(y < mini)
            mini = y;
        if(z < mini)
            mini = z;
        int mid = x + y + z - maxi - mini;
        if(mini + mid > maxi)
            printf("0\n");
        else
            printf("%d\n", (maxi + 1) - (mini + mid));
    }
    return 0;
}
