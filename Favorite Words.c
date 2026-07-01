#include<stdio.h>
int main()
{
    char s[5];
    scanf("%s", s);
    if(s[0] == 'c' || s[3] == 'f')
        printf("YES");
    else
        printf("NO");
    return 0;
}
