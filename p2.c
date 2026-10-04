// Input an integer n. Using composite conditions (&&), print the exact classification among
// "Positive Even", "Positive Odd", "Negative Even", "Negative Odd", or "Zero".

#include <stdio.h>
int main() {
	int n;
	printf("enter n: ");
	scanf("%d", &n);

	if (n > 0 && n % 2 == 0) printf("Positive Even\n");
	if (n > 0 && n % 2 != 0) printf("Positive Odd\n");
	if (n < 0 && n % 2 == 0) printf("Negative even\n");
	if (n < 0 && n % 2 != 0) printf("Negative Odd\n");
	if (n == 0) printf("Zero\n");

	return 0;
}