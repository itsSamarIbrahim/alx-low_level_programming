#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	 if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	 {
	 printf("Error\n");
	 exit(100);
	 }

	printf("%d\n", result(num1, num2));

	return (0);
}
