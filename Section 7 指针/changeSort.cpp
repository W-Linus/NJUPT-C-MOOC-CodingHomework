#include <stdio.h>

void sort(int* a, int n);
int a[10] = {}, n;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for (int i = 0; i < n; i++) {
		if (i != n - 1) {
			printf("%d  ", a[i]);
		}
		else {
			printf("%d  ", a[i]);
			printf("\n");
		}
	}
	return 0;
}

void sort(int* a, int n) {
	int temp;
	for (int i = 0; i < n-1; i++) {
		if (a[i] > a[i + 1]) {
			temp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = temp;
			i = 0;
		}
	}
}
