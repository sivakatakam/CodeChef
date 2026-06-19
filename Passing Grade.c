#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 1, f;
        scanf("%d", &n);
        scanf("%d", &f);
        for(int i = 0; i < n - 1; i++)
        {
            int x;
            scanf("%d", &x);
            if(x >= f)
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}
