#include <stdio.h>
#include <ctype.h>

int main(){

	char unit;
	float temp;

	printf("Is the temperature in (F) or (C)? : ");
	scanf("%c", &unit);

	unit = toupper(unit); // display C c in any form 

	if (unit == 'C'){
		printf("Enter the temp in celsius: ");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("The temp in celsius is: %.1f\n", temp);
	}
	else if (unit == 'F'){
		printf("\nEnter the temp in the Farenheit: ");
		scanf("%f", &temp);
		temp = ((temp - 32) * 5 ) / 9;
		printf("\nThe temp in celsius is: %f\n", temp);
	}
	else{
		printf("The %c is not a valid unit of measuremet\n", unit);
	}

	return 0;
	
}
