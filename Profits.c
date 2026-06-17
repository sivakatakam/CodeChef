#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x, c = 0;
        scanf("%d %d", &n, &x);
        if(x >= n)
            printf("0\n");
        else
        {
            for(int i = 0; i <= n - x; i++)
                c += i;
            printf("%d\n", c);
        }
    }
}
