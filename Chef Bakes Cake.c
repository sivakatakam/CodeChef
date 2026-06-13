#include<stdio.h>
#include<math.h>
int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    float z = (float)n / (y / x);
    int s = ceil(z);
    printf("%d", s);
}
