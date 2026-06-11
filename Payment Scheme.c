#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x > 50)
        printf("300");
    else
        printf("%d", 100 + (x * 4));
}
