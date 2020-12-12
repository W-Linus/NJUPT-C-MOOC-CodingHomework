#include <stdio.h>

int fun(int a, int b);
int a, b, r[1000],total;

int main() {
	scanf_s("%d%d", &a, &b);
	total = fun(a, b);
	for (int i = 0; i < total; i++) {
		if (r[i + 1] !=  0) {
			printf("%d ", r[i]);
		}
		if (r[i + 1] == 0) {
			printf("%d\n", r[i]);
			break;
		}
	}
	return 0;
}


int fun(int a, int b) {
	int j = 0;
	for (int i = a; i <= b; i++) {		
		if (i % 7 == 0 || i % 11 == 0) {
			if (i % 7 == 0 && i % 11 == 0) {
				continue;
			}
			else {
				r[j] = i;
				j++;
			}
		}
	}
	return j + 1;
}