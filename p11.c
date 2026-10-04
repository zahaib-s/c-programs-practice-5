// Task 11: Input three distinct integers a, b, c.
//  Using composite conditions (e.g., if ((a > b && a < c) || (a < b && a > c))),
//  identify which variable contains the median (middle) value without sorting the array/variables first.
#include <stdio.h>
int main(){
	int a, b, c;
	printf("enter  A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	if ((a > b && a < c) || (a < b && a > c)) {
		printf("A (%d) is the middle value\n", a);
	}
	if ((b > a && b < c) || (b < a && b > c)) {
		printf("B (%d) is the middle Value \n", b);
	}
	if ((c > a && c < b) || (c < a && c > b)) {
		printf("C (%d) is the middle value\n", c);
	}
	return 0;
}