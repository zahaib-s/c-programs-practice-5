// Input an integer year. Using a single if statement with composite conditions (&& and ||), print
// "Leap Year" if the year is divisible by 400 OR (divisible by 4 AND NOT divisible by 100). Otherwise, print
// "Not a Leap Year".

#include <stdio.h>

int main() {
	int  y;
	printf("Enter Year: ");
	scanf("%d", &y);
	
	if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
		printf("Leap year\n");}
	if (!((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))){
		printf("not a Leap Year\n");}
	
	return 0;
}