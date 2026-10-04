// Task 7: Input total seconds. Convert to hours, minutes, and seconds. Using composite conditions, if the time is strictly less than 60 seconds, print "Less than one minute"; if it is between 3600 and 86400 seconds inclusive, print "Within one day range".
#include <stdio.h>
int main(){
	int sec;
	printf("Seconds:  ");
	scanf("%d", &sec);
	int hr = sec / 3600;
	int min = (sec % 3600) / 60;
	int remsec = sec % 60;
	printf("Hours: %d\n", hr);
	printf("Minutes: %d\n", min);
	printf("seconds: %d\n", remsec);
	if (sec < 60) {
		printf("Less than one minute\n");
	}
	if (sec >= 3600 && sec <= 86400) {
		printf("Withinn one day range\n");}
	return 0;
}