#include <stdio.h>

int a[10],tool,min,max,minr,maxr;
double div=0;

int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 9; j++) {
		if (a[j] > a[j + 1]) {
			tool = a[j];
			a[j] = a[j + 1];
			a[j + 1] = tool;
			j = 0;
		}
	}
	/*if (a[0] == a[9]) {
		printf("%lf\n",(double)a[0]);
		return 0;
	}*/
	min = a[0];
	max = a[9];
	for (int k = 0; k < 10; k++) {
		if (a[k] == min) {
			minr++;
		}
		if (a[k] == max) {
			maxr++;
		}
	}
		
	for(int l = minr; l < 10 - maxr; l++) {
		div = div + a[l];
	}
	div =div/(double)(10-(minr+maxr));
	printf("%lf\n", div);
	return 0;
}
