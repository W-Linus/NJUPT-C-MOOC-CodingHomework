#include <stdio.h>
double F, C;
int main()
{
	scanf("%lf", &F);
	C = 5 * (F - 32) / 9;
	printf("Celsius=%lf", C);
	return 0;
}