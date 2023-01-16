#include <stdlib.h>
#include <stdio.h>
/**
 * main - Mai function
 * @argc: argument
 * @argv: argument
 * Return: Always 0 Success
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int mult;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", mult);
		return (0);
	}
}
