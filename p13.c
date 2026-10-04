// Task 13: Generate four random integers w, x, y, z. 
// Using swapping logic with a temp variable similar to t5.c, reorder w, x, y, z so that w <= x <= y <= z. 
// Print the initial and sorted variables.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int w = rand(), x = rand(), y = rand(), z = rand();
	printf("Initial: W: %d, X: %d, Y: %d, Z:  %d\n", w, x, y, z);
	int temp;
	if (w > x) { temp = w; w = x; x = temp; }
	if (x > y) { temp = x; x = y; y = temp; }
	if (y > z) { temp = y; y = z; z = temp; }
	if (w > x) { temp = w; w = x; x = temp; }
	if (x > y) { temp = x; x = y; y = temp; }
	if (w > x) { temp = w; w = x; x = temp; }
	printf("Sorted: W: %d, X: %d, Y: %d, Z: %d \n", w, x, y, z);
	return 0;
}