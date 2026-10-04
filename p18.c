// Task 18: Input four integers w, x, y, z. 
// Count how many of these variables lie outside the inclusive range [20, 80] using composite conditions (val < 20 || val > 80)
//  for each variable, and display the total count.
#include <stdio.h>
int main(){
	int w, x, y, z;
	printf("enter  W, X, Y, Z: ");
	scanf("%d %d %d %d", &w, &x, &y, &z);
	int count = 0;
	if (w < 20 || w > 80) count = count + 1;
	if (x < 20 || x > 80) count = count + 1;
	if (y < 20 || y > 80) count = count + 1;
	if (z < 20 || z > 80) count = count + 1;
	printf("%d variables are outside the range  [20, 80]\n", count);
	return 0;
}