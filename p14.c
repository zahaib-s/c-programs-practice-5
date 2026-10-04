// Task 14: Generate three random integers x, y, z. Using pairwise swap logic (temp), 
// sort the three variables in descending order (x >= y >= z) instead of ascending order.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int x = rand(), y = rand(), z = rand();
	printf("Initial:  X: %d, Y: %d, Z: %d \n", x, y, z);
	int temp;
	if (x < y) { temp = x; x = y; y = temp; }
	if (y < z) { temp = y; y = z; z = temp; }
	if (x < y) { temp = x; x = y; y = temp; }
	printf("Sorted: X: %d, Y: %d, Z:  %d\n", x, y, z);
	return 0;
}