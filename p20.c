// Task 20: Input three integer side lengths a, b, c. 
// First, verify if they form a valid triangle using composite conditions. If valid, classify the triangle as "Equilateral" (all sides equal), 
// "Isosceles" (exactly two sides equal), or "Scalene" (all sides different).
#include <stdio.h>
int main(){
	int a, b, c;
	printf("enter  A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
		if (a == b && b == c) {
			printf("Valid Equilateral  Triangle\n");
		}
		if ((a == b || b == c || a == c) && !(a == b && b == c)) {
			printf("Valid Isosceles  Triangle \n");
		}
		if (a != b && b != c && a != c) {
			printf("Valid Scalene  triangle\n");}}
	if (!(a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a))) {
		printf("Invalid  Triangle\n");
	}

    
	return 0;
}