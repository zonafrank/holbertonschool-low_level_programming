#include <stdio.h>

/**
 *main - entry point for the program
 @argc: number of arguments including the name of the file
 @argv: array of pointers to strings representing command line arguments
 Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
