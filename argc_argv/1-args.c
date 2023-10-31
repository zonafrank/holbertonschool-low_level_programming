#include <stdio.h>

/**
 *main - entry point for the program
 *prints the number of command line arguments
 *@argc: number of arguments including the name of the file
 *@argv: array of pointers to strings representing command line arguments
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
