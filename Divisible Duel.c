#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, e = 0, o = 0;
        scanf("%d %d", &x, &y);
        for(int i = x; i <= y; i += x)
        {
            if(i % 2 == 0)
                e += i;
            else
                o += i;
        }
        printf("%s\n", (e > o) ? "YES" : "NO");
    }
    return 0;
}
