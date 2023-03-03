#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int pa,pb,qa,qb;
        scanf("%d%d%d%d",&pa,&pb,&qa,&qb);
        if(pa>=pb)
        {
            if(qa>=qb)
            {
                if(pa<qa)
                printf("P\n");
                else if(qa<pa)
                printf("Q\n");
                else
                printf("TIE\n");
            }
            else
            {
                if(pa<qb)
                printf("P\n");
                else if(qb<pa)
                printf("Q\n");
                else
                printf("TIE\n");
            }
        }
        else
        {
            if(qa>=qb)
            {
                if(pb<qa)
                printf("P\n");
                else if(qa<pb)
                printf("Q\n");
                else
                printf("TIE\n");
            }
            else
            {
                if(pb<qb)
                printf("P\n");
                else if(qb<pb)
                printf("Q\n");
                else
                printf("TIE\n");
            }
        }
    }
}
