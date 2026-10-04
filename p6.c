// Input an integer amount. First, check if the amount is positive and a multiple of 100 using
// composite conditions (amount > 0 && amount % 100 == 0). If valid, calculate and print the number of
// 1000, 500, and 100 notes required; otherwise, print "Invalid Amount: Must be a positive multiple of
// 100".

#include <stdio.h>
int main() {
	int amt;
	printf("enter amount: ");
	scanf("%d", &amt);

	if (amt > 0 && amt % 100 == 0) {
		int n1000 = amt / 1000;
		amt = amt % 1000;
		int n500 = amt / 500;
		amt = amt % 500;
		int n100 = amt / 100;

		printf("1000 notes: %d\n", n1000);
		printf("500 notes: %d\n", n500);
		printf("100 notes: %d\n", n100);
	}
	if (!(amt > 0 && amt % 100 == 0)) {
		printf("Invalid Amount,Must be a positive multiple of 100\n");
	}

	return 0;
}