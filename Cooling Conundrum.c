#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, s = 0;
        scanf("%d %d", &x, &y);
        while(x != y)
        {
            s += ceil(x / 10.0);
            x--;
        }
        printf("%d\n", s);
    }
    return 0;
}
