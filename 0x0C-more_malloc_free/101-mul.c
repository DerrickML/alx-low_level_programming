#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
  int mul, num1 = 1, num2 = 1;

  for (mul = 0; argv[1][mul]; i++)
    if (argv[1][mul] != '0')
    {
      num1 = 0;
      break;
    }

  for (mul = 0; argv[2][mul]; i++)
    if (argv[2][mul] != '0')
    {
      num2 = 0;
      break;
    }

  if (num1 == 1 || num2 == 1)
  {
    printf("0\n");
    exit(0);
  }
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int lar)
{
  int i = 0;

  for (i = 0; i < lar; i++)
    ar[i] = '0';
  ar[lar] = '\0';
  return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *

