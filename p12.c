// Task 12: Generate four random integers w, x, y, z between 1 and 100. Compute the largest, smallest, their difference, and check if the average (midpoint) of largest and smallest is greater than 50 using a composite check ((largest+smallest)/2.0>50.0).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int w = rand() % 100 + 1; int x = rand() % 100 + 1;
	int y = rand() % 100 + 1;
	int z = rand() % 100 + 1;
	printf("W: %d, X: %d, Y: %d, Z: %d \n", w, x, y, z);
	int max = w;
	if (x > max) max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	int min = w;
	if (x < min) min = x;
	if (y < min) min = y;
	if (z < min) min = z;
	int diff = max - min;
	printf("Largest: %d, Smallest: %d, Difference:  %d\n", max, min, diff);
	if ((max + min) / 2.0 > 50.0) {
		printf("Midpoint is greater than  50\n");
	}
	if (!((max + min) / 2.0 > 50.0)) {
		printf("midpoint is not greater  than 50 \n");
	}
	return 0;
}