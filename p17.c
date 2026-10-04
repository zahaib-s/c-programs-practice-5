// Task 17: Generate a random three-digit number between 100 and 999 (rand() % 900 + 100).
//  Extract its hundreds, tens, and units digits. Using composite conditions, 
// check if the digits are in strictly ascending order (e.g., 1 < 4 < 8). Print "Digits in Ascending Order" 
// or "Not in Ascending Order".
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int n = rand() % 900 + 100;
	int h = n / 100;
	int t = (n / 10) % 10;
	int u = n % 10;
	printf("N: %d ->  ", n);
	if (h < t && t < u) {
		printf("Digits in Ascending Order\n");
	}
	if (!(h < t && t < u)) {
		printf("Not in ascending Order \n");
	}
	return 0;
}