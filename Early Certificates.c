#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        char a[n + 1], b[m + 1];
        scanf("%s %s", a, b);
        int mini = (n < m) ? n : m;
        for(int i = 0; i < mini; i++)
        {
            if(a[i] == b[i])
                printf("%c", a[i]);
            else
                break;
        }
        printf("\n");
        t--;
    }
}
