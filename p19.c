// Task 19: Input Cartesian coordinates (x, y) as floating-point numbers or integers.
//  Using composite conditions (&&), determine whether the point lies in "Quadrant 1", "Quadrant 2", "Quadrant 3", "Quadrant 4",
//  on an "Axis", or at the "Origin".
#include <stdio.h>
int main(){
	 float x, y;
	printf("enter X  and Y: ");
	scanf("%f %f", &x, &y);
	if (x > 0 && y > 0) printf("Quadrant 1\n");
	if (x < 0 && y > 0) printf("Quadrant 2 \n");
	if (x < 0 && y < 0) printf("quadrant 3\n");
	if (x > 0 && y < 0) printf("Quadrant 4\n");
	if (x == 0 && y == 0) printf("Origin \n");
	if ((x == 0 || y == 0) && !(x == 0 && y == 0)) printf("Axis \n");
	return 0;
}