#include <stdio.h>
#include <math.h>

double r, h, surtotal, voltotal;
double sur(double r, double h);
double vol(double r, double h);

int main() {
	scanf("%lf%lf", &r, &h);
	sur(r, h);
	vol(r, h);
	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, surtotal, voltotal);
	return 0;
}

double sur(double r, double h) {
	double c, s, l;
	l = sqrt((r * r) + (h * h));
	c = r * r * 3.14;
	s = ((2 * r * 3.14) * l) / 2;
	surtotal = c + s;
	return surtotal;
}

double vol(double r, double h) {
	voltotal = ((r * r * 3.14) * h) / 3;
	return voltotal;
}