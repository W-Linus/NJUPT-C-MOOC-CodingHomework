#include  <stdio.h>
#include <math.h>
int main()

{
	double s, m;
	int i = 2, jc = 1, flag = 1;
	scanf("%lf", &m);
	s = m;
	while (1) {
		for (int a = 1; a <= i; a++) {
			jc = jc * a;
		}
		if (flag == 1) {
			s = s - (pow(m, (double)i) / jc);
			flag = 0;
		}
		else {
			s = s + (pow(m, (double)i) / jc);
			flag = 1;
		}
		if (fabs(pow(m, (double)i) / jc) <= 1e-4) {
			printf("%.2f\n", s);
			return 0;
		}
		i += 1;
		jc = 1;
	}
}