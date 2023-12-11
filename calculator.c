// C Program to make a Simple Calculator

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	double a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"if want to exit press x: ");
		scanf(" %c", &c);
		
		if (c == 'x')
			exit(0);
		printf("Enter first number: \n");
		scanf("%lf ", &a);
        printf("Enter second number: \n");
		scanf("%lf ",&b);
		
		switch (c) {

		// For Addition
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		// For Subtraction
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		// For Multiplication
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		// For Division
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;

		
		default:
			printf(
				"Error! please write a valid operator\n");
		}

		printf("\n");
	}
}
