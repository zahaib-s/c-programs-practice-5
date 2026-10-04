// Task 9: Generate four random integers w, x, y, z using rand(). Print all four values. 
// Using explicit composite if statements (e.g., if (w > x && w > y && w > z)), 
// identify and print which specific variable holds the strictly largest value.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int w = rand(), x = rand(), y = rand(), z = rand();
	printf("W: %d, X: %d, Y: %d, Z: %d \n", w, x, y, z);
	if (w > x && w > y && w > z) printf("W is Largest \n");
	if (x > w && x > y && x > z) printf("X is largest\n");
	if (y > w && y > x && y > z) printf("Y is Largest\n");
	if (z > w && z > x && z > y) printf("Z is Largest \n");
	return 0;
}