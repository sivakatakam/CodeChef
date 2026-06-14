#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int w, p, k;
        scanf("%d %d %d", &w, &p, &k);
        if(k > w)
            printf("%d\n", (w * 2) + k - w);
        else
            printf("%d\n", k * 2);
        t--;
    }
}
