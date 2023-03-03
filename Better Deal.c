#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,da,db;
        scanf("%d%d",&a,&b);
        da=(a*100)/100;
        db=(b*200)/100;
        if(100-da>200-db)
        printf("SECOND\n");
        else if(100-da<200-db)
        printf("FIRST\n");
        else
        printf("BOTH\n");
    }
}
