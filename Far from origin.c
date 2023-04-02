#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,y1,x2,y2;
        float d1,d2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        d1=sqrt((x1*x1)+(y1*y1));
        d2=sqrt((x2*x2)+(y2*y2));
        if(d1>d2)
        printf("ALEX\n");
        else if(d1<d2)
        printf("BOB\n");
        else
        printf("EQUAL\n");
    }
}
