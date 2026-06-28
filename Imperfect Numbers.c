#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a = 101;
        scanf("%d", &n);
        for(int i = 1; i < 101; i++)
        {
            if((i % 2 == 0 || i % 5 == 0) && (i % 10 != 0))
            {
                int d = abs(n - i);
                if(d < a)
                    a = d;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}
