#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            if(x != 1)
                c = c + x - 1;
        }
        printf("%d\n", c);
    }
}
