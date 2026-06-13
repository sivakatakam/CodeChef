#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int c = 0;
        if(x > 49)
            c++;
        if(y > 49)
            c++;
        if(z > 49)
            c++;
        if(c > 1)
            printf("YES\n");
        else
            printf("NO\n");
        
        t--;
    }
}
