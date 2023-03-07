#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                s[i]='T';
                printf("%c",s[i]);
            }
            else if(s[i]=='T')
            {
                s[i]='A';
                printf("%c",s[i]);
            }
            else if(s[i]=='C')
            {
                s[i]='G';
                printf("%c",s[i]);
            }
            else if(s[i]=='G')
            {
                s[i]='C';
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
}
