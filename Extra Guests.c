#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", (x * 100) + ((y - x) * 150) );
}
