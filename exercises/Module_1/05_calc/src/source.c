#include <stdio.h>
#include <math.h>
#include "source.h"

void simple_sum(void)
{
	int num1, num2, sum;

	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;

	printf("%d + %d = %d\n", num1, num2, sum);
}

void simple_math(void)
{
	int ret;
	float num1, num2, result;
	char oper;
	
	if (!(ret = scanf("%f %c %f", &num1, &oper, &num2)))
		printf("ERR\n");

	switch(oper)
	{
		case '+':
			result = num1 + num2;		
			printf("%.1f\n", result);
			break;

		case '-':
			result = num1 - num2;
			printf("%.1f\n", result);
			break;
		
		case '*':
			result = num1 * num2;
			printf("%.1f\n", result);
			break;

		case '/':
			result = num1 / num2;
			printf("%.1f\n", result);
			break;

		default:
			printf("ERR\n");
			break;
	}	
}
