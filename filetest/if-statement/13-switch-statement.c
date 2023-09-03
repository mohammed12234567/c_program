
#include <stdio.h>

int main(){

	// switch = a more effecient alternative to using many 'eslse if' statements
	// 	    allows a value to be tested for equality against many cases


	char grade;

	printf("Enter your grade : ");
	scanf("%c", &grade);

	switch (grade){
		case 'A':
			printf("Perfect\n");
			break;
		case 'B':
			printf("You did good!\n");
			break;
		case 'C':
			printf("You did okay!\n");
			break;
		case 'D':
			printf("At least it's not an F!\n");
			break;
		case 'F':
			printf("YOU FAILED!\n");
			break;
		default:
			printf("Please enter only valid grades!\n");
	}

}


