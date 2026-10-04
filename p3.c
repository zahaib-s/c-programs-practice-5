// Input marks for three subjects. Using composite conditions (&& and ||), print:

// o "Excellent" if all three marks are 80 or above.
// o "Good" if all three marks are 60 or above.
// o "Needs Improvement" if at least one mark is below 50.

#include <stdio.h>
int main() {
	int m1, m2, m3;
	printf("enter marks: ");
	scanf("%d %d %d", &m1, &m2, &m3);

	if (m1 >= 80 && m2 >= 80 && m3 >= 80) {
		printf("excellent\n");}
	if (m1 >= 60 && m2 >= 60 && m3 >= 60 && !(m1 >= 80 && m2 >= 80 && m3 >= 80)) {
		printf("good \n");
	}
	if (m1 < 50 || m2 < 50 || m3 < 50) {
		printf("Need Imporvement\n");

	}

	return 0;
}