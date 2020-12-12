#include <stdio.h>

int year, month, day,total;
int daypermonth[11] = { 31,31,30,31,30,31,31,30,31,30,31 };

int main() {
	scanf("%d-%d-%d", &year, &month, &day);
	    if (year % 400 == 0 || year % 4 == 0) {
			if (month <= 2) {
				for (int i = 0; i < month - 1; i++) {
					total = total + daypermonth[i];
				}
				printf("%d\n", total);
				return 0;
			}
			else {
				for(int i=0;i<month-2;i++){
					total = total + daypermonth[i];
				}
				total = total + 29;
				total = total + day;
				printf("%d\n", total);
				return 0;
			   }
		}
		else {
			if (month <= 2) {
				for (int i = 0; i < month - 1; i++) {
					total = total + daypermonth[i];
				}
				printf("%d\n", total);
				return 0;
			}
			else {
				for (int i = 0; i < month - 2; i++) {
					total = total + daypermonth[i];
				}
				total = total + 28;
				total = total + day;
				printf("%d\n", total);
				return 0;
			}
		}
	}
