#include <stdio.h>

int a, b, c, flagb, flagc, ctrl = 1;
void judgeprime(int b, int c);


int main() {
	for (a = 4; a <= 2000; a++) {
		flagc = 1, flagb = 1;
		if (a % 2 == 0) {
			for (b = 2; b <= 2000; b++) {
				c = a - b;
				judgeprime(b, c);
				if (flagb == 1 && flagc == 1) {
					if (ctrl < 4) {
						printf("%4d=%4d+%4d ", a, b, c);
					}
					if (ctrl == 4) {
						printf("%4d=%4d+%4d\n", a, b, c);
						ctrl = 0;
					}
					ctrl++;
					break;
				}
			}
		}
	}

}

void judgeprime(int b, int c) {
	for (int i = 2; i < b; i++) {
		if (b % i == 0) {
			flagb = 0;
			break;
		}
		else {
			flagb = 1;
		}
	}
	for (int j = 2; j < c; j++) {
		if (c % j == 0) {
			flagc = 0;
			break;
		}
		else {
			flagc= 1;
		}
	}

}
