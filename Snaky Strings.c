#include<stdio.h>
int main()
{
    char s[5];
    scanf("%s", s);
    if(s[0] == 's' || s[3] == 's')
        printf("YES");
    else
        printf("NO");
}
