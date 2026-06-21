#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, cs = 0, c = 0;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                cs = 1;
            if(cs == 1 && s[i] == '1')
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}
