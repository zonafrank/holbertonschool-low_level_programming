/**
 * print_name - prints a name based on a call back function
 * @name: pointer to the name string literal
 * @f: pointer to the function for printing out the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
