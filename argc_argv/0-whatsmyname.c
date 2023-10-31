#include <stdio.h>

/**
 *main - entry point for the program
 *@argc: number of arguments including the name of the file
 *@argv: array of pointers to strings representing command line arguments
 *Return: Always 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
