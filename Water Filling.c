#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        for(int i=0;i<3;i++)
        {
            int n;
            scanf("%d",&n);
            if(n==0)
            c++;
        }
        if(c>=2)
        printf("Water filling time\n");
        else
        printf("Not now\n");
    }
}
