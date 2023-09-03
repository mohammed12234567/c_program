#include <stdio.h>

int main(){

	char operator;
	double num1;
	double num2;
	double result;

	printf("Enter the operator + - * / :", operator);
	scanf("%c", &operator);

	printf("Enter number 1 : ", num1);
	scanf("%lf", &num1);

	printf("Enter number 2 : ", num2);
	scanf("%lf", &num2);

	switch (operator){
		case '+':
			result = num1 + num2;
			printf("Result : %.2lf\n", result);
			break;
		case '-':
			result = num1 - num2;
			printf("Result : %.2lf\n", result);
			break;
		case '*':
			result = num1 * num2;
			printf("Result : %.2lf\n", result);
			break;
		case '/':
			result = num1 / num2;
			printf("Result : %.2lf\n", result);
			break;
		default:
		printf("%c is not a valid\n", operator);
		break;
	}
}