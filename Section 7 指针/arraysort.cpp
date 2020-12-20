#include <stdio.h>

int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
int m,temp;

int main() {
	scanf("%d", &m);
	int ctrl = m;
	for (int i = 0; i < 10; i++) {
		if(ctrl-1>=0){
			temp = a[9];
			for (int j = 8; j >= 0; j--) {
				a[j + 1] = a[j];
			}
			a[0] = temp;
			ctrl--;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (i != 9) {
			printf("%3d", a[i]);
		}
		else {
			printf("%3d\n", a[i]);
		}
	}
	return 0;
}
