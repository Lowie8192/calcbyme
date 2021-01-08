#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
	printf("Hi, and welcome to this calc.\n");
	
	double firstNumber;
	printf("Enter your first number: ");
	scanf("%lf", &firstNumber);

	char op;
	printf("Enter your operator: ");
	scanf(" %c", &op);	

	double secondNumber;
	printf("Enter your second number: ");
	scanf("%lf", &secondNumber);
	
	if(op == '+'){
		printf("%f\n", firstNumber + secondNumber);
	}
	else if(op == '-'){
		printf("%f\n", firstNumber - secondNumber);
	}
	else if(op == '*'){
		printf("%f\n", firstNumber * secondNumber);
	}
	else if(op == '/'){
		printf("%f\n", firstNumber / secondNumber);
	}
	else {
		printf("Something went wrong...\n");	
	}
	
	printf("This (awesome) program is made by Lowie8192!\n");	

	return 0;
}
