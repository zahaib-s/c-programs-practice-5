// Task 16: Simulate rolling two six-sided dice. Using composite conditions, check if: Both dice rolled a 6 ("Double Six Jackpot!"),
//  The dice show equal numbers ("Pair / Double"), The sum of the dice equals 7 or 11 ("Craps Natural Win"). Otherwise print "Standard Roll".
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int d1 = rand() % 6 + 1;
	int d2 = rand() % 6 + 1;
	printf("Die 1: %d, Die 2: %d ->  ", d1, d2);
	if (d1 == 6 && d2 == 6) {
		printf("Double Six  Jackpot!\n");
	}
	if (d1 == d2 && !(d1 == 6 && d2 == 6)) {
		printf("Pair /  Double\n");}
	if ((d1 + d2 == 7 || d1 + d2 == 11) && d1 != d2) {
		printf("Craps Natural  Win\n");
	}
	if (!(d1 == 6 && d2 == 6) && !(d1 == d2) && !(d1 + d2 == 7 || d1 + d2 == 11)) {
		printf("Standard  Roll \n");
	}
	return 0;
}