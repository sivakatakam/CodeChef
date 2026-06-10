#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 4)
        printf("1000");
    else
        printf("%d", n * 200);
}
