#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = (int)ceil((n + 1) / 20.0);
    printf("%d", x);
}
