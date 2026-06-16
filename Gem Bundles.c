#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int r, b, g, mini = -1;
        scanf("%d %d %d", &r, &b, &g);
        if(r <= b && r <= g)
            mini = r;
        else if(b <= r && b <= g)
            mini = b;
        else
            mini = g;
        printf("%d\n", (mini * 10) + ((r + b + g - mini - mini - mini) * 3));
    }
}
