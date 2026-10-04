// Task 15: Generate three random integers x, y, z in the range [1, 5].
//  Using composite conditions, check and print "All values are equal" if x==y and y==z, 
// "All values are distinct" if x not equal to y and y not equal to z and x not equal to z,
//  or "Two values are equal" otherwise.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int x = rand() % 5 + 1;
	int y = rand() % 5 + 1;
	int z = rand() % 5 + 1;
	printf("x: %d, Y: %d, Z:  %d\n", x, y, z);
	if (x == y && y == z) {
		printf("All vals are equal\n");
	}
	if (x != y && y != z && x != z) {
		printf("All vals are Distinct \n");
	}
	if (!((x == y && y == z) || (x != y && y != z && x != z))) {
		printf("Two vals are equal\n");
	}
	return 0;
}