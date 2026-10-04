// Task 10: Generate three random integers x, y, z using rand().
//  Using composite conditions, check if there is a unique smallest value 
// (e.g., x < y && x < z). If a unique smallest exists, print its value;
//  if two or more variables share the minimum value, print "No unique smallest value".
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int x = rand(), y = rand(), z = rand();
	printf("X: %d, Y: %d, z: %d\n", x, y, z);
	if (x < y && x < z) {
		printf("Unique smallest: %d\n", x);}
	if (y < x && y < z) {
		printf("Unique  smallest: %d\n", y);
	}
	if (z < x && z < y) {
		printf("Unique smallest: %d \n", z);
	}
	if (!((x < y && x < z) || (y < x && y < z) || (z < x && z < y))) {
		printf("No unique Smallest value\n");
	}
	return 0;
}