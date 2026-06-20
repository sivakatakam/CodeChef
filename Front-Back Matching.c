#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int freq[26] = {0};
        for(int i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] > 1)
            {
                c = 1;
                break;
            }
        }
        printf("%s\n", (c == 1) ? "YES" : "NO");
    }
    return 0;
}
