#include <stdio.h>

int a = 0, flag = 0;

int main() {
	for (int i = 100; i < 1000; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 1;
			}
		}
		if (flag != 1) {
			printf("%4d", i);
			a++;
		}

		if (a == 8) {
			printf("\n");
			a =0;
		}
		flag = 0;
	}
	printf("\n");
	return 0;
}
