#include<stdio.h>
int main()
{
    int r,o,c;
    scanf("%d%d%d",&r,&o,&c);
    if(r<c+(20-o)*36)
    printf("YES\n");
    else
    printf("NO\n");
}
