#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiply 2 numbers as arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 success
*/
int main(int num1, char *num2[])
{
unsigned long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < num1; i++)
	{
		for (j = 0; num2[i][j] != '\0'; j++)
		{
			if (num2[i][j] > 57 || num2[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(num2[1]) *  atol(num2[2]);
	printf("%lu\n", mul);
return (0);
}
