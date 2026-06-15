#include<stdio.h>
int main()
{
    char s[6];
    scanf("%s", s);
    if(s[2] == 'n' && s[3] == 't' && s[4] == 'a')
        printf("YES");
    else
        printf("NO");
}
