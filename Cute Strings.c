#include<stdio.h>
int main()
{
    char s[4];
    scanf("%s", s);
    printf("%s", (s[0] == s[2] && s[1] == 'w') ? "CUTE" : "NO");
}
