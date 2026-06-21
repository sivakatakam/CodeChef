#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        for(int i = 0; i < n; i++)
        {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                c++;
            else
                c = 0;
            if(c == 4)
                break;
        }
        printf("%s\n", (c == 4) ? "YES" : "NO");
    }
    return 0;
}
