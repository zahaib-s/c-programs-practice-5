// Input an integer. Using composite conditions, check if the number lies within the range [10, 99]
// and is an even number. If both conditions hold, print "Valid Even Two-Digit Number"; otherwise, print
// "Out of Range or Odd".
#include <stdio.h>
int main() {
	int num;
	printf("N: ");
	scanf("%d", &num);
	if (num >= 10 && num <= 99 && num % 2 == 0) {
		printf("Valid even two digit number\n");}
	if (!(num >= 10 && num <= 99 && num % 2 == 0)) {
		printf("Out of range or odd\n");
	}

	return 0;
}