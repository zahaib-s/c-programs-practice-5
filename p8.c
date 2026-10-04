// Task 8: Input a single character ch. Using composite conditions,
//  classify and print whether it is an 
// "Uppercase Vowel", "Lowercase Vowel", "Digit", or "Other Character".
#include <stdio.h>
int main(){
	char ch;
	printf("enter  char: ");
	scanf(" %c", &ch);
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		printf("Uppercase Vowel \n");
	}
    
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		printf("lowercase Vowel\n");
	}
	if (ch >= '0' && ch <= '9') {
		printf("Digit \n");
	}
	if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') && !(ch >= '0' && ch <= '9')) {
		printf("Other character\n");}
	return 0;
}