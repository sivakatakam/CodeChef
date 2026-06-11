#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x == 1)
        printf("8000");
    else if(x == 2)
        printf("4000");
    else if(x == 3)
        printf("2000");
    else
        printf("1000");
}
