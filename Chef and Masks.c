#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x*100<y*10)
        printf("Disposable\n");
        else
        printf("Cloth\n");
    }
}
