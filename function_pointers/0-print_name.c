void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
