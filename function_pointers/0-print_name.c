void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;

	f(name);
}
