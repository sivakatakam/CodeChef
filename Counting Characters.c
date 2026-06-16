#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int n, a = 0;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'a')
                a++;
        }
        printf("%d %d\n", a, n - a);
        t--;
    }
}
