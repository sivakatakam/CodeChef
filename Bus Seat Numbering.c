#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n<=15)
        {
            if(n>=11&&n<=15)
            printf("Lower Single\n");
            else
            printf("Lower Double\n");
        }
        else
        {
            if(n>=26&&n<=30)
            printf("Upper Single\n");
            else
            printf("Upper Double\n");
        }
    }
}
